#include <iomanip>
#include "emp.hpp"
#include "salary.hpp"
#include "functions.hpp"

using namespace std;

int main() {
	unsigned short em, i;

	em = getInput("Hi, how many employees do you have?");

	salary salaries[em];

	string name, surname, id, position, lookUp, choice;
	float sal, tax;
	bool found = false;

	system("cls");

	for (i = 0; i < em; i++) {
		cout << "\nPlease enter the name of employee " << i + 1 << " >>> ";
		cin >> name;

		cout << "\nPlease enter " << name << "'s surname >>> ";
		cin >> surname;

		cout << "\nPlease enter " << name << "'s Employee ID >>> ";
		cin >> id;

		cout << "\nPlease enter " << name << "'s position in the company >>> ";
		cin >> position;

		sal = getInput("Please enter how much " + name + " earns per month, untaxed", "R");
		tax = getInput("Please enter the \% tax on the employee's monthly salary", "");

		salaries[i] = salary(name, surname, id, position, sal, tax);

		system("cls");
	}

	input:
		cout << "\nPlease enter a valid ID number >>> ";
		cin >> lookUp;

	cout << setprecision(2) << fixed;
	cout << setfill('*');

	for (short i = 0; i < em; i++)
	{
		if (lookUp == salaries[i].getID()) {
			found = true;
			cout << '\n' << setw(28) << '\n';
			cout << salaries[i].getInfo() << "\n";
			cout << "Salary:\tR" << salaries[i].getSalary() << " (after taxation)\n";
			cout << "Net Salary:\tR" << salaries[i].calculateNet() << " (after taxation) \n";
			cout << setw(40) << "\n";
		}
	}

	if (!found) {
		cout << "\nThe ID that you have entered does not exist in our records, please try again.\n";
		goto input;
	}
	else {
		cout << "\nWould you like to view another employees records? (y/n) >>> ";
		cin >> choice;

		if (choice == "y") {
			found = false;
			goto input;
		}
	}
	
	system("pause");
 	return 0;
 }
