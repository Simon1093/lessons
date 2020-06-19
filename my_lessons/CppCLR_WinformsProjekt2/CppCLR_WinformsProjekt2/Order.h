using namespace System;
using namespace System::Data::Odbc;

public ref class Order {
private:
	int id;
	String ^CustomerName;
	String ^Car;
	String ^Address;
	int DestinationID;
	data::Destination^ Destination;
public:
	Order() {};

	void setID(int id) {
		this->id = id;
	}

	void setCustomerName(String^ CustomerName) {
		this->CustomerName = CustomerName;
	}

	void setCar(String^ Car) {
		this->Car = Car;
	}

	void setAddress(String^ Address) {
		this->Address = Address;
	}

	void setDestinationID(int DestinationID) {
		this->DestinationID = DestinationID;
	}

	void setDestination(data::Destination^ Destination) {
		this->Destination = Destination;
	}

	int getID() {
		return this->id;
	}

	String^ getCustomerName() {
		return this->CustomerName;
	}

	String^ getCar() {
		return this->Car;
	}

	String^ setAddress() {
		return this->Address;
	}

	int getDestinationID() {
		return this->DestinationID;
	}
};

