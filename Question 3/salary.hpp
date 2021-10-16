using std::string;

class salary : public emp{
	private:
		float monthlySal, tax;

	public:
		salary() {}

		salary(string& n, string& s, string& id, string& p, float& sal, float& t) {
			this->name = n;
			this->surname = s;
			this->empID = id;
			this->position = p;
			this->monthlySal = sal;
			this->tax = t / 100;
		}

		string getID() {
			return this->empID;
		}

		float getSalary() const {
			return this->monthlySal - (this->monthlySal * this->tax);
		}

		float calculateNet() const {
			return (this->monthlySal - (this->monthlySal * this->tax)) * 12;
		}

		~salary() {}
};
