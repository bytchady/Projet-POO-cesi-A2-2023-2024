﻿#include "BDD.h"

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;
// Test
BDD::BDD()
{
    try
    {
        // Chaine de connexion
        String^ connectString = "Data Source=127.0.0.1,1433;Initial Catalog = shopbycesi;User ID=sa;Password=Octoberkaltouma1603!+";
        // Objet connection
        connection = gcnew SqlConnection(connectString);
        // Ouverture
        connection->Open();
        System::Diagnostics::Debug::WriteLine("Connexion ok");
    }
    catch (Exception^ ex)
    {
        System::Diagnostics::Debug::WriteLine(ex->ToString());
    }
}

BDD::~BDD()
{

}
System::Data::DataSet^ BDD::executeQuery(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, this->connection);
    // Cr�ation d'un DataSet
    System::Data::DataSet^ ds = gcnew System::Data::DataSet();
    // Remplissage du DataSet avec le SqlDataAdapter
    da->Fill(ds);

    return ds;
}

int BDD::executeNonQuery(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlCommand^ command = gcnew SqlCommand(sql, this->connection);
    // Execution
    int affectedrows = command->ExecuteNonQuery();
    return affectedrows;
}

int BDD::executeInsert(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlCommand^ command = gcnew SqlCommand(sql + ";SELECT @@IDENTITY", this->connection);
    // Execution
    int idGenere = Decimal::ToInt32((Decimal)command->ExecuteScalar());
    return idGenere;
}

Object^ BDD::executeScalar(String^ query)
{
    try {
        SqlCommand^ cmd = gcnew SqlCommand(query, connection);
        connection->Open();
        Object^ result = cmd->ExecuteScalar();
        return result;
    }
    catch (Exception^ e) {
        throw e;
    }
    finally {
        if (connection->State == ConnectionState::Open) {
            connection->Close();
        }
    }
}
