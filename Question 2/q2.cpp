#include <iostream>
#include <iomanip>
#include "functions.hpp"

using namespace std;

int main() {
	const short cust = 3; 

 	float charges[cust]; float totalCost = 0.0;
 	float hours[cust]; float totalHours = 0.0;

 	system("cls");

	for (short i = 0; i < cust; i++)
	{
		hours[i] = getInput("How many hours did customer ", i + 1, " park for?");

		charges[i] = calculateCharges(hours[i]);

		totalCost += charges[i];
		totalHours += hours[i];
	}
	
 	system("cls");

 	cout << "\nCar\tHours\tCharge\n" << setprecision(2) << fixed;

	for (short i = 0; i < cust; i++)
	{
		cout << left << i + 1 << "\t" << hours[i] << "\tR" << charges[i] << endl;
	}

	cout << left << "TOTAL\t" << totalHours << "\tR" << totalCost << "\n";

	system("pause");

 	return 0;
 }