
using namespace System;
using namespace System::Data::Odbc;

public ref class Discount {
private:
	int id;
	String ^Percent;
	String ^OrderID;
public:
	Discount() {};

	void setID(int id) {
		this->id = id;
	}

	void setPercent(String^ Percent) {
		this->Percent = Percent;
	}

	void setOrderID(String^ OrderID) {
		this->OrderID = OrderID;
	}

	int getID() {
		return this->id;
	}

	String^ getPercent() {
		return this->Percent;
	}

	String^ getOrderID() {
		return this->OrderID;
	}
};

