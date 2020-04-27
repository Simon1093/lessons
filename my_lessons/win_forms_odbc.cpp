private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ queryString = "SELECT Name FROM Users;";

		OdbcConnection^ connection = gcnew OdbcConnection("Dsn=MS Access Database;dbq=D:\database.accdb;defaultdir=D:;driverid=25;fil=MS Access;maxbuffersize=2048;pagetimeout=5;");
		OdbcCommand^ command = gcnew OdbcCommand(queryString);
		int p;
		try {
			command->Connection = connection;
			connection->Open();
			OdbcDataReader^ data = command->ExecuteReader();
			while (data->Read()) {
				MessageBox::Show(data[0]->ToString());
			}
		} catch (OdbcException^ e) {
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
	}
