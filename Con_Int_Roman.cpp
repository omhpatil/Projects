#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
    string thousands[] = {"", "M", "MM", "MMM"};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    return thousands[num / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];
}

int main() {
    while (true) {
        int num;
        cout << "Enter an integer (or 0 to exit): ";
        cin >> num;

        if (num == 0) {
            break;  // Exit the loop if the user enters 0.
        }

        if (num >= 1) {
            string roman = intToRoman(num);
            cout << "Roman numeral: " << roman << endl;
        } else {
            cout << "Please enter a positive integer or 0 to exit." << endl;
        }
    }

    return 0;
}
