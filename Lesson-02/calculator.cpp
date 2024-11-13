//
// Created by MrAbdukarim on 11/13/2024.
//

#include "iostream"
using namespace std;

int main() {
    int a, b;
    char image;
    char choice;

    do {
        cout << "Birinchi soni kiriting: ";
        cin >> a;
        cout << "Amalni kiriting ( +, -, *, /, % ): ";
        cin >> image;
        cout << "Ikkinchi soni kiriting: ";
        cin >> b;

        if (image == '+') {
            cout << "Natija: " << a + b << endl;
        } else if (image == '-') {
            cout << "Natija: " << a - b << endl;
        } else if (image == '*') {
            cout << "Natija: " << a * b << endl;
        } else if (image == '/') {
            if (b == 0) {
                cout << "Xatolik: Nolga bo'lish mumkin emas!" << endl;
            } else {
                cout << "Natija: " << a / b << endl;
            }
        } else if (image == '%') {
            if (b == 0) {
                cout << "Xatolik: Nolga bo'lish mumkin emas!" << endl;
            } else {
                cout << "Natija: " << a % b << endl;
            }
        } else {
            cout << "Xatolik: Noto'g'ri amal kiritildi!" << endl;
        }

        cout << "Davom etishni xohlaysizmi? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
