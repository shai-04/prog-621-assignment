#pragma once
#include <iostream>

using std::string;

class emp {
	protected:
		string name, surname, position, empID;

	public:		
		string getInfo() const {
			return "Employee Number:\t" + this->empID +
				   "\nName:\t" + this->name +
				   "\nSurname:\t" + this->surname +
				   "\nPosition:\t" + this->position;
		}

		~emp() {}
};
