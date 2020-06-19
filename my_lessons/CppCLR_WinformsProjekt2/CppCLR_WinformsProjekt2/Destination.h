
using namespace System;

namespace data {
	public ref class Destination {
	private:
		int id;
		String ^StreetName;
		String ^HouseNumber;
	public:
		Destination() {
		}

		void setID(int id) {
			this->id = id;
		}

		void setStreetName(String^ StreetName) {
			this->StreetName = StreetName;
		}

		void setHouseNumber(String^ HouseNumber) {
			this->HouseNumber = HouseNumber;
		}

		int getID() {
			return this->id;
		}

		String^ getStreetName() {
			return this->StreetName;
		}

		String^ getHouseNumber() {
			return this->HouseNumber;
		}
	};

}