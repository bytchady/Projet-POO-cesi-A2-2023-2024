#pragma once
#include "Personnel.h"
#include "ServicePersonnel.h"
#include "Adresse.h"
#include "ServiceAdresse.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de AjouterPersonnel
	/// </summary>
	public ref class AjouterPersonnel : public System::Windows::Forms::Form
	{
	public:
		AjouterPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~AjouterPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;









	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Label^ NomPersonnel;
	private: System::Windows::Forms::Label^ PrenomPersonnel;



	private: System::Windows::Forms::TextBox^ textBox_PrenomPersonnel;
	private: System::Windows::Forms::Label^ NumRuePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_NumRuePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_Nom_Rue_Personnel;
	private: System::Windows::Forms::TextBox^ textBox_CodePostalePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_NomVillePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_DateNaissance;











	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::TextBox^ textBox_NomPersonnel;
	private: System::Windows::Forms::Label^ Titre;


	private: System::Windows::Forms::TextBox^ textBox_Id_Superieur;


	private: System::Windows::Forms::Label^ NomRuePersonnel;
	private: System::Windows::Forms::Label^ CodePostalPersonnel;
	private: System::Windows::Forms::Label^ NomVillePersonnel;

	private: System::Windows::Forms::Label^ DateNaissancePersonnel;
	private: System::Windows::Forms::Label^ DateEmbauchePersonnel;

	private: System::Windows::Forms::Label^ IdPersonnel1;
	private: System::Windows::Forms::TextBox^ textBox_DateEmbauchePersonnel;
	private: System::Windows::Forms::Label^ ComplementAdressePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_ComplementAdressePersonnel;


	protected:





	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::Label());
			this->NumRuePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->NomPersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NumRuePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Nom_Rue_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->NomRuePersonnel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->textBox_Id_Superieur = (gcnew System::Windows::Forms::TextBox());
			this->IdPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->textBox_DateEmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->DateEmbauchePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_DateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->DateNaissancePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_NomVillePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->NomVillePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_CodePostalePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->CodePostalPersonnel = (gcnew System::Windows::Forms::Label());
			this->ComplementAdressePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_ComplementAdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->Titre = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.61495F)));
			this->tableLayoutPanel2->Controls->Add(this->PrenomPersonnel, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->NumRuePersonnel, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomPersonnel, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->NomPersonnel, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox_PrenomPersonnel, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NumRuePersonnel, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox_Nom_Rue_Personnel, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->NomRuePersonnel, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 20);
			this->tableLayoutPanel2->Controls->Add(this->textBox_Id_Superieur, 0, 19);
			this->tableLayoutPanel2->Controls->Add(this->IdPersonnel1, 0, 18);
			this->tableLayoutPanel2->Controls->Add(this->textBox_DateEmbauchePersonnel, 0, 17);
			this->tableLayoutPanel2->Controls->Add(this->DateEmbauchePersonnel, 0, 16);
			this->tableLayoutPanel2->Controls->Add(this->textBox_DateNaissance, 0, 15);
			this->tableLayoutPanel2->Controls->Add(this->DateNaissancePersonnel, 0, 14);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomVillePersonnel, 0, 13);
			this->tableLayoutPanel2->Controls->Add(this->NomVillePersonnel, 0, 12);
			this->tableLayoutPanel2->Controls->Add(this->textBox_CodePostalePersonnel, 0, 11);
			this->tableLayoutPanel2->Controls->Add(this->CodePostalPersonnel, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->ComplementAdressePersonnel, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox_ComplementAdressePersonnel, 0, 9);
			this->tableLayoutPanel2->Location = System::Drawing::Point(384, 114);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 21;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 78.37838F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 21.62162F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 79)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 73)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 91)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(667, 1215);
			this->tableLayoutPanel2->TabIndex = 2;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AjouterPersonnel::tableLayoutPanel2_Paint);
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->AutoSize = true;
			this->PrenomPersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PrenomPersonnel->Location = System::Drawing::Point(3, 217);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(661, 39);
			this->PrenomPersonnel->TabIndex = 3;
			this->PrenomPersonnel->Text = L"Prenom";
			// 
			// NumRuePersonnel
			// 
			this->NumRuePersonnel->AutoSize = true;
			this->NumRuePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NumRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NumRuePersonnel->Location = System::Drawing::Point(3, 311);
			this->NumRuePersonnel->Name = L"NumRuePersonnel";
			this->NumRuePersonnel->Size = System::Drawing::Size(661, 39);
			this->NumRuePersonnel->TabIndex = 4;
			this->NumRuePersonnel->Text = L"Numero de la rue ";
			this->NumRuePersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label3_Click);
			// 
			// textBox_NomPersonnel
			// 
			this->textBox_NomPersonnel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_NomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomPersonnel->Location = System::Drawing::Point(3, 141);
			this->textBox_NomPersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NomPersonnel->Name = L"textBox_NomPersonnel";
			this->textBox_NomPersonnel->Size = System::Drawing::Size(661, 46);
			this->textBox_NomPersonnel->TabIndex = 10;
			this->textBox_NomPersonnel->TextChanged += gcnew System::EventHandler(this, &AjouterPersonnel::textBox_NomPersonnel_TextChanged);
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->AutoSize = true;
			this->NomPersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomPersonnel->Location = System::Drawing::Point(3, 100);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(661, 39);
			this->NomPersonnel->TabIndex = 2;
			this->NomPersonnel->Text = L"Nom";
			this->NomPersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label1_Click);
			// 
			// textBox_PrenomPersonnel
			// 
			this->textBox_PrenomPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_PrenomPersonnel->Location = System::Drawing::Point(3, 258);
			this->textBox_PrenomPersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_PrenomPersonnel->Name = L"textBox_PrenomPersonnel";
			this->textBox_PrenomPersonnel->Size = System::Drawing::Size(661, 46);
			this->textBox_PrenomPersonnel->TabIndex = 11;
			// 
			// textBox_NumRuePersonnel
			// 
			this->textBox_NumRuePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NumRuePersonnel->Location = System::Drawing::Point(3, 352);
			this->textBox_NumRuePersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NumRuePersonnel->Name = L"textBox_NumRuePersonnel";
			this->textBox_NumRuePersonnel->Size = System::Drawing::Size(661, 46);
			this->textBox_NumRuePersonnel->TabIndex = 12;
			// 
			// textBox_Nom_Rue_Personnel
			// 
			this->textBox_Nom_Rue_Personnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Nom_Rue_Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_Nom_Rue_Personnel->Location = System::Drawing::Point(3, 444);
			this->textBox_Nom_Rue_Personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_Nom_Rue_Personnel->Name = L"textBox_Nom_Rue_Personnel";
			this->textBox_Nom_Rue_Personnel->Size = System::Drawing::Size(661, 46);
			this->textBox_Nom_Rue_Personnel->TabIndex = 13;
			this->textBox_Nom_Rue_Personnel->TextChanged += gcnew System::EventHandler(this, &AjouterPersonnel::textBox4_TextChanged);
			// 
			// NomRuePersonnel
			// 
			this->NomRuePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->NomRuePersonnel->AutoSize = true;
			this->NomRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NomRuePersonnel->Location = System::Drawing::Point(4, 403);
			this->NomRuePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NomRuePersonnel->Name = L"NomRuePersonnel";
			this->NomRuePersonnel->Size = System::Drawing::Size(230, 39);
			this->NomRuePersonnel->TabIndex = 18;
			this->NomRuePersonnel->Text = L"Nom de la rue";
			this->NomRuePersonnel->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->bAnnuler, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->bAjouter, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 1129);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(659, 79);
			this->tableLayoutPanel1->TabIndex = 4;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AjouterPersonnel::tableLayoutPanel1_Paint);
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(333, 4);
			this->bAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(322, 71);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterPersonnel::bAnnuler_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(4, 4);
			this->bAjouter->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(321, 71);
			this->bAjouter->TabIndex = 0;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &AjouterPersonnel::bValider_Click);
			// 
			// textBox_Id_Superieur
			// 
			this->textBox_Id_Superieur->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Id_Superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_Id_Superieur->Location = System::Drawing::Point(3, 1061);
			this->textBox_Id_Superieur->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_Id_Superieur->Name = L"textBox_Id_Superieur";
			this->textBox_Id_Superieur->Size = System::Drawing::Size(661, 46);
			this->textBox_Id_Superieur->TabIndex = 17;
			// 
			// IdPersonnel1
			// 
			this->IdPersonnel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->IdPersonnel1->AutoSize = true;
			this->IdPersonnel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdPersonnel1->Location = System::Drawing::Point(4, 1020);
			this->IdPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IdPersonnel1->Name = L"IdPersonnel1";
			this->IdPersonnel1->Size = System::Drawing::Size(231, 39);
			this->IdPersonnel1->TabIndex = 22;
			this->IdPersonnel1->Text = L"Sup�rieur (ID)";
			// 
			// textBox_DateEmbauchePersonnel
			// 
			this->textBox_DateEmbauchePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_DateEmbauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_DateEmbauchePersonnel->Location = System::Drawing::Point(4, 956);
			this->textBox_DateEmbauchePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_DateEmbauchePersonnel->Name = L"textBox_DateEmbauchePersonnel";
			this->textBox_DateEmbauchePersonnel->Size = System::Drawing::Size(659, 46);
			this->textBox_DateEmbauchePersonnel->TabIndex = 24;
			// 
			// DateEmbauchePersonnel
			// 
			this->DateEmbauchePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->DateEmbauchePersonnel->AutoSize = true;
			this->DateEmbauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DateEmbauchePersonnel->Location = System::Drawing::Point(4, 913);
			this->DateEmbauchePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateEmbauchePersonnel->Name = L"DateEmbauchePersonnel";
			this->DateEmbauchePersonnel->Size = System::Drawing::Size(282, 39);
			this->DateEmbauchePersonnel->TabIndex = 23;
			this->DateEmbauchePersonnel->Text = L"Date d\'embauche";
			// 
			// textBox_DateNaissance
			// 
			this->textBox_DateNaissance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_DateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_DateNaissance->Location = System::Drawing::Point(3, 850);
			this->textBox_DateNaissance->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_DateNaissance->Name = L"textBox_DateNaissance";
			this->textBox_DateNaissance->Size = System::Drawing::Size(661, 46);
			this->textBox_DateNaissance->TabIndex = 16;
			// 
			// DateNaissancePersonnel
			// 
			this->DateNaissancePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->DateNaissancePersonnel->AutoSize = true;
			this->DateNaissancePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DateNaissancePersonnel->Location = System::Drawing::Point(4, 809);
			this->DateNaissancePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateNaissancePersonnel->Name = L"DateNaissancePersonnel";
			this->DateNaissancePersonnel->Size = System::Drawing::Size(299, 39);
			this->DateNaissancePersonnel->TabIndex = 21;
			this->DateNaissancePersonnel->Text = L"Date de naissance";
			// 
			// textBox_NomVillePersonnel
			// 
			this->textBox_NomVillePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomVillePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomVillePersonnel->Location = System::Drawing::Point(3, 748);
			this->textBox_NomVillePersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NomVillePersonnel->Name = L"textBox_NomVillePersonnel";
			this->textBox_NomVillePersonnel->Size = System::Drawing::Size(661, 46);
			this->textBox_NomVillePersonnel->TabIndex = 15;
			// 
			// NomVillePersonnel
			// 
			this->NomVillePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->NomVillePersonnel->AutoSize = true;
			this->NomVillePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NomVillePersonnel->Location = System::Drawing::Point(4, 707);
			this->NomVillePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NomVillePersonnel->Name = L"NomVillePersonnel";
			this->NomVillePersonnel->Size = System::Drawing::Size(83, 39);
			this->NomVillePersonnel->TabIndex = 20;
			this->NomVillePersonnel->Text = L"Ville";
			// 
			// textBox_CodePostalePersonnel
			// 
			this->textBox_CodePostalePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_CodePostalePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_CodePostalePersonnel->Location = System::Drawing::Point(3, 645);
			this->textBox_CodePostalePersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_CodePostalePersonnel->Name = L"textBox_CodePostalePersonnel";
			this->textBox_CodePostalePersonnel->Size = System::Drawing::Size(661, 46);
			this->textBox_CodePostalePersonnel->TabIndex = 14;
			// 
			// CodePostalPersonnel
			// 
			this->CodePostalPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CodePostalPersonnel->AutoSize = true;
			this->CodePostalPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CodePostalPersonnel->Location = System::Drawing::Point(4, 604);
			this->CodePostalPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CodePostalPersonnel->Name = L"CodePostalPersonnel";
			this->CodePostalPersonnel->Size = System::Drawing::Size(222, 39);
			this->CodePostalPersonnel->TabIndex = 19;
			this->CodePostalPersonnel->Text = L"Code Postale";
			this->CodePostalPersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::CodePostalPersonnel_Click);
			// 
			// ComplementAdressePersonnel
			// 
			this->ComplementAdressePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ComplementAdressePersonnel->AutoSize = true;
			this->ComplementAdressePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ComplementAdressePersonnel->Location = System::Drawing::Point(4, 504);
			this->ComplementAdressePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ComplementAdressePersonnel->Name = L"ComplementAdressePersonnel";
			this->ComplementAdressePersonnel->Size = System::Drawing::Size(365, 39);
			this->ComplementAdressePersonnel->TabIndex = 25;
			this->ComplementAdressePersonnel->Text = L"Compl�ment d\'adresse";
			// 
			// textBox_ComplementAdressePersonnel
			// 
			this->textBox_ComplementAdressePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ComplementAdressePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_ComplementAdressePersonnel->Location = System::Drawing::Point(4, 547);
			this->textBox_ComplementAdressePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_ComplementAdressePersonnel->Name = L"textBox_ComplementAdressePersonnel";
			this->textBox_ComplementAdressePersonnel->Size = System::Drawing::Size(659, 46);
			this->textBox_ComplementAdressePersonnel->TabIndex = 26;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Dock = System::Windows::Forms::DockStyle::Right;
			this->vScrollBar1->Location = System::Drawing::Point(1240, 0);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(22, 977);
			this->vScrollBar1->TabIndex = 3;
			this->vScrollBar1->Value = 50;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &AjouterPersonnel::vScrollBar1_Scroll);
			// 
			// Titre
			// 
			this->Titre->AutoSize = true;
			this->Titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titre->Location = System::Drawing::Point(421, 9);
			this->Titre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Titre->Name = L"Titre";
			this->Titre->Size = System::Drawing::Size(580, 69);
			this->Titre->TabIndex = 4;
			this->Titre->Text = L"Ajouter un personnel";
			this->Titre->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label8_Click);
			// 
			// AjouterPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->Titre);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 813);
			this->Name = L"AjouterPersonnel";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ajouter un personnel";
			this->Load += gcnew System::EventHandler(this, &AjouterPersonnel::AjouterPersonnel_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AjouterPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bValider_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->textBox_NomPersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_PrenomPersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NumRuePersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_Nom_Rue_Personnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_ComplementAdressePersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_CodePostalePersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomVillePersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_DateNaissance->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_DateEmbauchePersonnel->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_Id_Superieur->Text))
		{

			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Personnel^ personnel = gcnew Personnel;
		Adresse^ adresse = gcnew Adresse;
		personnel->setNom_Personnel(this->textBox_NomPersonnel->Text);
		personnel->setPrenom_Personnel(this->textBox_PrenomPersonnel->Text);
		adresse->setNumRue(int::Parse(this->textBox_NumRuePersonnel->Text));
		adresse->setNomrue(this->textBox_Nom_Rue_Personnel->Text);
		adresse->setComplementAdr(this->textBox_ComplementAdressePersonnel->Text);
		adresse->setCodePostal(this->textBox_CodePostalePersonnel->Text);
		adresse->setNomVille(this->textBox_NomVillePersonnel->Text);
		personnel->setNaissance_Personnel(DateTime::Parse(this->textBox_DateNaissance->Text));
		personnel->setDate_Embauche(DateTime::Parse(this->textBox_DateEmbauchePersonnel->Text));
		personnel->setId_Personnel_1(int::Parse(this->textBox_Id_Superieur->Text));

		ServiceAdresse^ serviceAdresse = gcnew ServiceAdresse();
		serviceAdresse->InsertAdresse(adresse);
	}
	private: System::Void textBox_NomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void CodePostalPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}