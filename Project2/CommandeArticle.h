#pragma once
#include "CommandeRecap.h"
#include "ServiceArticle.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CommandeArticle
	/// </summary>
	public ref class CommandeArticle : public System::Windows::Forms::Form
	{
	public:
		CommandeArticle(void)
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
		~CommandeArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::DataGridView^ CatalogueListeArticle;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::DataGridView^ CataloguePanierVisual;

	private: System::Windows::Forms::Button^ bSupprimerArticle;
	private: System::Windows::Forms::Button^ bAjouterArticle;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ lTotalPrixTTC;
	private: System::Windows::Forms::Label^ lTotalTVA;
	private: System::Windows::Forms::Label^ label_PrixTVA;
	private: System::Windows::Forms::Label^ label_PrixHT;


	private: System::Windows::Forms::Label^ label_PrixTTC;

	private: System::Windows::Forms::Label^ lTotalPrixHT;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

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
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CatalogueListeArticle = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CataloguePanierVisual = (gcnew System::Windows::Forms::DataGridView());
			this->bSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->bAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lTotalTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixHT = (gcnew System::Windows::Forms::Label());
			this->label_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->lTotalPrixHT = (gcnew System::Windows::Forms::Label());
			this->lTotalPrixTTC = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->BeginInit();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				96.33225F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				3.667745F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				311)));
			this->tableLayoutPanel4->Controls->Add(this->CatalogueListeArticle, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 46);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1233, 780);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// CatalogueListeArticle
			// 
			this->CatalogueListeArticle->AllowUserToAddRows = false;
			this->CatalogueListeArticle->AllowUserToDeleteRows = false;
			this->CatalogueListeArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueListeArticle->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueListeArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueListeArticle->Location = System::Drawing::Point(3, 3);
			this->CatalogueListeArticle->Name = L"CatalogueListeArticle";
			this->CatalogueListeArticle->RowHeadersWidth = 51;
			this->CatalogueListeArticle->Size = System::Drawing::Size(882, 774);
			this->CatalogueListeArticle->TabIndex = 2;
			this->CatalogueListeArticle->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeArticle::CatalogueListeArticle_CellContentClick);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->CataloguePanierVisual, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->bSupprimerArticle, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->bAjouterArticle, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel5->Location = System::Drawing::Point(924, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 69.2053F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30.7947F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(306, 774);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// CataloguePanierVisual
			// 
			this->CataloguePanierVisual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanierVisual->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CataloguePanierVisual->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanierVisual->Location = System::Drawing::Point(3, 3);
			this->CataloguePanierVisual->Name = L"CataloguePanierVisual";
			this->CataloguePanierVisual->RowHeadersWidth = 51;
			this->CataloguePanierVisual->Size = System::Drawing::Size(300, 465);
			this->CataloguePanierVisual->TabIndex = 3;
			// 
			// bSupprimerArticle
			// 
			this->bSupprimerArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSupprimerArticle->Location = System::Drawing::Point(3, 684);
			this->bSupprimerArticle->Name = L"bSupprimerArticle";
			this->bSupprimerArticle->Size = System::Drawing::Size(300, 40);
			this->bSupprimerArticle->TabIndex = 4;
			this->bSupprimerArticle->Text = L"Supprimer Article";
			this->bSupprimerArticle->UseVisualStyleBackColor = true;
			// 
			// bAjouterArticle
			// 
			this->bAjouterArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouterArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bAjouterArticle->Location = System::Drawing::Point(3, 730);
			this->bAjouterArticle->Name = L"bAjouterArticle";
			this->bAjouterArticle->Size = System::Drawing::Size(300, 41);
			this->bAjouterArticle->TabIndex = 5;
			this->bAjouterArticle->Text = L"Ajouter Article";
			this->bAjouterArticle->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.61225F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.38776F)));
			this->tableLayoutPanel6->Controls->Add(this->lTotalTVA, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTVA, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixHT, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTTC, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixHT, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixTTC, 1, 2);
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 474);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(300, 204);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// lTotalTVA
			// 
			this->lTotalTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalTVA->AutoSize = true;
			this->lTotalTVA->BackColor = System::Drawing::Color::White;
			this->lTotalTVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalTVA->Location = System::Drawing::Point(94, 72);
			this->lTotalTVA->Name = L"lTotalTVA";
			this->lTotalTVA->Size = System::Drawing::Size(203, 22);
			this->lTotalTVA->TabIndex = 4;
			// 
			// label_PrixTVA
			// 
			this->label_PrixTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTVA->AutoSize = true;
			this->label_PrixTVA->Location = System::Drawing::Point(27, 72);
			this->label_PrixTVA->Name = L"label_PrixTVA";
			this->label_PrixTVA->Size = System::Drawing::Size(61, 13);
			this->label_PrixTVA->TabIndex = 2;
			this->label_PrixTVA->Text = L"Total TVA :";
			// 
			// label_PrixHT
			// 
			this->label_PrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixHT->AutoSize = true;
			this->label_PrixHT->Location = System::Drawing::Point(13, 0);
			this->label_PrixHT->Name = L"label_PrixHT";
			this->label_PrixHT->Size = System::Drawing::Size(75, 13);
			this->label_PrixHT->TabIndex = 0;
			this->label_PrixHT->Text = L"Total Prix HT :";
			// 
			// label_PrixTTC
			// 
			this->label_PrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTTC->AutoSize = true;
			this->label_PrixTTC->Location = System::Drawing::Point(7, 144);
			this->label_PrixTTC->Name = L"label_PrixTTC";
			this->label_PrixTTC->Size = System::Drawing::Size(81, 13);
			this->label_PrixTTC->TabIndex = 1;
			this->label_PrixTTC->Text = L"Total Prix TTC :";
			// 
			// lTotalPrixHT
			// 
			this->lTotalPrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixHT->AutoSize = true;
			this->lTotalPrixHT->BackColor = System::Drawing::Color::White;
			this->lTotalPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalPrixHT->Location = System::Drawing::Point(94, 0);
			this->lTotalPrixHT->Name = L"lTotalPrixHT";
			this->lTotalPrixHT->Size = System::Drawing::Size(203, 22);
			this->lTotalPrixHT->TabIndex = 3;
			// 
			// lTotalPrixTTC
			// 
			this->lTotalPrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixTTC->AutoSize = true;
			this->lTotalPrixTTC->BackColor = System::Drawing::Color::White;
			this->lTotalPrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalPrixTTC->Location = System::Drawing::Point(94, 144);
			this->lTotalPrixTTC->Name = L"lTotalPrixTTC";
			this->lTotalPrixTTC->Size = System::Drawing::Size(203, 22);
			this->lTotalPrixTTC->TabIndex = 5;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				66.18557F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.81443F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				292)));
			this->tableLayoutPanel3->Controls->Add(this->bAnnuler, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 878);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1233, 79);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(943, 3);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(287, 73);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &CommandeArticle::bAnnuler_Click);
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(625, 3);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(312, 73);
			this->bSuivant->TabIndex = 2;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &CommandeArticle::bSuivant_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 786)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// CommandeArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"CommandeArticle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Panier";
			this->tableLayoutPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->EndInit();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
		CommandeRecap^ Cr = gcnew CommandeRecap();
		Cr->ShowDialog();
	}
	private: System::Void CatalogueListeArticle_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	};
}