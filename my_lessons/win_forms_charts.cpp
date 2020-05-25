private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OdbcDataReader^ data = makeReadQuery("SELECT * FROM Users;");
		while (data->Read()) {
			this->chart1->Series["Age"]->Points->AddXY(data["Name"]->ToString(), data["Age"]);
		}

		data->Close();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		OdbcDataReader^ data = makeReadQuery("SELECT * FROM Products;");
		while (data->Read()) {
			this->chart2->Series["Price"]->Points->AddXY(data["Name"]->ToString(), data["Price"]);
		}

		data->Close();
	}


	private: OdbcDataReader^ makeReadQuery(String^ query) {
		OdbcConnection^ connection = gcnew OdbcConnection("Dsn=MS Access Database;dbq=D:\database.accdb;defaultdir=D:;driverid=25;fil=MS Access;maxbuffersize=2048;pagetimeout=5;");
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
