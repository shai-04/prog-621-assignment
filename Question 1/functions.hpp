#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::string;

bool reduce(const unsigned short& t, const unsigned short& b) {
    return (t <= 0 || b <= 0) ? (false) : (true);
}

void gcf(unsigned short& t, unsigned short& b) {
    if (t != 1 || b != 1) {
        for (short i = fmin(t, b) ; i > 1 ; i--) {
            if (t % i == 0 && b % i == 0) {
                t /= i;
                b /= i;
                break;
            }
        }
    }
}

int getInput(string question) {
    int i = 0;

    while (true) {
        cout << '\n' << question << " >>> ";
        cin >> i;

        if (cin.good()) return i;

        system("color 04");
        cout << "\nInvalid input, please try again.\n";

        cin.clear();
        cin.ignore(INT32_MAX, '\n');
    }
}