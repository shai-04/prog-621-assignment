using std::cin;
using std::cout;
using std::string;

float getInput(string q1, string q2) {
    float f = 0;

    while (true) {
        cout << '\n' << q1 << " >>> " << q2;
        cin >> f;

        if (cin.good() && f > 0) return f;

        cout << "\nInvalid input, please try again.\n";

        cin.clear();
        cin.ignore(INT32_MAX, '\n');
    }
}

short getInput(string q1) {
    short i = 0;

    while (true) {
        cout << '\n' << q1 << " >>> ";
        cin >> i;

        if (cin.good() && i > 0) return i;

        cout << "\nInvalid input, please try again.\n";

        cin.clear();
        cin.ignore(INT32_MAX, '\n');
    }
}
