#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::string;

inline float calculateCharges(float& h) {
    return (h > 3) ? (fmin(20, 12 + 0.9 * (h - 3))) : (12);
}

float getInput(string q1, short q2, string q3) {
    float f = 0;

    while (true) {
        cout << '\n' << q1 << q2 << q3 << " >>> ";
        cin >> f;

        if (cin.good() && f > 0) return f;

        cout << "\nInvalid input, please try again.\n";

        cin.clear();
        cin.ignore(INT32_MAX, '\n');
    }
}
