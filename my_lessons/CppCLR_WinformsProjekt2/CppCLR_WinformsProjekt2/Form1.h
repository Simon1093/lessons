#pragma once
#include "Destination.h";
#include "Discount.h";
#include "Order.h";

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Destination";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(152, 43);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 3;
			this->trackBar1->TickFrequency = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(262, 43);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 45);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"From";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(302, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"To";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 136);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(341, 95);
			this->listBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Found orders";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(139, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Find orders";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(220, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(323, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(242, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Discounts";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 243);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: array<data::Destination^> ^allDestinations = gcnew array<data::Destination^>(50);
			 int chosenComboDestinationIndex;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		OdbcDataReader^ data = makeReadQuery("SELECT * FROM Destinations;");
		int index = 0;
		while (data->Read()) {
			data::Destination ^destination = gcnew data::Destination();

			destination->setID(Int32::Parse(data["id"]->ToString()));
			destination->setStreetName(data["Street"]->ToString());
			destination->setHouseNumber(data["HouseNumber"]->ToString());

			allDestinations[index] = destination;

			this->comboBox1->Items->Add(
				allDestinations[index]->getID() + 
				". " + allDestinations[index]->getStreetName() + 
				". House: " + allDestinations[index]->getHouseNumber()
			);

			index++;
		}

		data->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OdbcDataReader^ data = makeReadQuery("SELECT *, Discounts.id as DiscountID, Orders.id as OrderID "
			"FROM Discounts, Destinations, Orders "
			"WHERE "
			"Destinations.Street = '" + this->allDestinations[this->chosenComboDestinationIndex]->getStreetName() + "' AND "
			"Destinations.HouseNumber = '" + this->allDestinations[this->chosenComboDestinationIndex]->getHouseNumber() + "' AND "
			"Destinations.id = Orders.DestinationID AND "
			"Orders.id = Discounts.OrderID AND "
			"Discounts.DiscountPercent >= " + this->label5->Text + " AND "
			"Discounts.DiscountPercent <= " + this->label6->Text + "; "
		);
		
		this->listBox1->Items->Clear();

		if (data->HasRows) {
			int index = 0;
			while (data->Read()) {
				Discount ^discount = gcnew Discount();
				discount->setID(Int32::Parse(data["DiscountID"]->ToString()));
				discount->setOrderID(data["OrderID"]->ToString());
				discount->setPercent(data["DiscountPercent"]->ToString());

				Order ^order = gcnew Order();
				order->setID(Int32::Parse(data["OrderID"]->ToString()));
				order->setAddress(data["Address"]->ToString());
				order->setCar(data["Car"]->ToString());
				order->setCustomerName(data["CustomerName"]->ToString());
				
				for (int i = 0; i < this->allDestinations->Length; i++) {
					if (this->allDestinations[i] && this->allDestinations[i]->getID() == Int32::Parse(data["DestinationID"]->ToString())) {
						order->setDestination(this->allDestinations[i]);
					}
				}
				
				order->setDestinationID(Int32::Parse(data["DestinationID"]->ToString()));

				String ^result = this->allDestinations[index]->getStreetName() +
					". House: " + this->allDestinations[index]->getHouseNumber() +
					". OrderID: " + order->getID() + ". Discount: " + discount->getPercent() + "%";

				this->listBox1->Items->Add(result);
				index++;
			}
		}
		else {
			this->listBox1->Items->Add("No data");
		}
	}

	private: OdbcDataReader^ makeReadQuery(String^ query) {
		OdbcConnection^ connection = gcnew OdbcConnection("Dsn=MS Access Database;dbq=D:\database1.accdb;defaultdir=D:;driverid=25;fil=MS Access;maxbuffersize=2048;pagetimeout=5;");
		OdbcCommand^ command = gcnew OdbcCommand(query);

		try {
			command->Connection = connection;
			connection->Open();
			OdbcDataReader^ data = command->ExecuteReader();
			return data;
		}
		catch (OdbcException^ e) {
			ShowError(e);
		}
	}

	private: void ShowError(OdbcException^ e) {
		String^ errorMessages = "";

		for (int i = 0; i < e->Errors->Count; i++)
		{
			errorMessages += "Index #" + i + "\n" +
				"Message: " + e->Errors[i]->Message + "\n" +
				"NativeError: " + e->Errors[i]->NativeError + "\n" +
				"Source: " + e->Errors[i]->Source + "\n" +
				"SQL: " + e->Errors[i]->SQLState + "\n";
		}

		MessageBox::Show(errorMessages);
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		this->label5->Text = this->trackBar1->Value.ToString();
	}

	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
		this->label6->Text = this->trackBar2->Value.ToString();
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->chosenComboDestinationIndex = this->comboBox1->SelectedIndex;
	}
};
}
