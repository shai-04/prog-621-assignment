#include <iostream>
#include <windows.h>
#include "functions.hpp"

using namespace std;

int main() {
    unsigned short num, denom;

    system("cls");  

    input:
        num = getInput("Enter the numerator of the fraction");
        denom = getInput("Enter the denominator of the fraction");

    if (!reduce(num, denom)) {
        system("color 04");

        cout << "\a\nThere seems to be an error with the fraction " <<
                "you've entered. Please try again.\n";

        goto input;
    }

    system("color 02");

    gcf(num, denom);

    cout << num << "/" << denom;

    system("pause");
    
    return 0;
}
