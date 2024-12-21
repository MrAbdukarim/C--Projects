//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* int type 2 ta son berilgan. Shu sonlarni yig'indisini, ayirmasini, ko'paytmasini, bo'linmasini aniqlab ekranga chiqaruvchi dastur tuzing. */
    cout << "Berilgan 2 ta sonni yig'indisini, ayirmasini, ko'paytmasini, bo'linmasini aniqlab beruvchi dastur." << endl;

    int num1, num2;
    cout << "Sonlarni kiriting: ";
    cin >> num1 >> num2;

    cout << "Yig'indisi: " << num1 + num2 << endl;
    cout << "Ayirmasi: " << num1 - num2 << endl;
    cout << "Ko'paytmasini: " << num1 * num2 << endl;
    cout << "Bo'linmasi: " << num1 / num2 << endl;


    return 0;
}