#pragma once

namespace inmobiliaria3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textNombre;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textTelefono;
	private: System::Windows::Forms::Button^ btnEnviar;

	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textTelefono = (gcnew System::Windows::Forms::TextBox());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(41, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre Completo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(41, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Email:";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::btnCancelar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(41, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Número de Telefono:";
			// 
			// textNombre
			// 
			this->textNombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNombre->Location = System::Drawing::Point(46, 61);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(352, 35);
			this->textNombre->TabIndex = 2;
			// 
			// textEmail
			// 
			this->textEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail->Location = System::Drawing::Point(46, 153);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(352, 35);
			this->textEmail->TabIndex = 2;
			// 
			// textTelefono
			// 
			this->textTelefono->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textTelefono->Location = System::Drawing::Point(46, 251);
			this->textTelefono->Name = L"textTelefono";
			this->textTelefono->Size = System::Drawing::Size(352, 35);
			this->textTelefono->TabIndex = 2;
			// 
			// btnEnviar
			// 
			this->btnEnviar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEnviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnviar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEnviar->Location = System::Drawing::Point(3, 3);
			this->btnEnviar->Name = L"btnEnviar";
			this->btnEnviar->Size = System::Drawing::Size(170, 69);
			this->btnEnviar->TabIndex = 3;
			this->btnEnviar->Text = L"Enviar";
			this->btnEnviar->UseVisualStyleBackColor = true;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &MainForm::btnEnviar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnCancelar->Location = System::Drawing::Point(179, 3);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(170, 69);
			this->btnCancelar->TabIndex = 3;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &MainForm::btnCancelar_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnEnviar, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnCancelar, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(46, 330);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(352, 75);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(437, 462);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->textTelefono);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textNombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(459, 518);
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textEmail->Text = "";
		this->textNombre->Text = "";
		this->textTelefono->Text = "";

	}
    private: System::Void btnEnviar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->textNombre->Text->Trim() == "")
		{
			MessageBox::Show("Por favor ingrese Nombre", "Validacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->textEmail->Text->Trim() == "")
		{
			MessageBox::Show("Por favor ingrese Email", "Validacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->textTelefono->Text->Trim() == "")
		{
			MessageBox::Show("Por favor ingrese Telefono", "Validacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("Datos ingresados exitosamente", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

     }
};
}
