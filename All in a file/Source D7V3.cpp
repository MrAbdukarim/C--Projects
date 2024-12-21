//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 3-vazifa **/
    /* 1.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 marta oshirib, aks holda o'zini ekranga chiqaring.  */
    cout << "Sonni kiriting: ";
    int num;
    cin >> num;

    if (num % 2 == 0) {
        cout << "Natija: " << num * 10 << endl;
    } else {
        cout << "Natija: " << num << endl;
    }

    /* 2.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 martaga kamaytirib, aks holda o'zini ekranga chiqaring. */
    cout << "Sonni kiriting: ";
    int num2;
    cin >> num2;
    if (num2 % 2 != 0) {
        cout << "Natija: " << num2 / 10 << endl;
    } else {
        cout << "Natija: " << num2 << endl;
    }

    /* 3.  1 ta son berilga. Agar son 2 xoanli bo'lsa uni qiymatini 100 ga oshirib, aks holda o'zini ekranga chiqaring. */
    cout << "Sonni kiriting: ";
    int num3;
    cin >> num3;

    if (num3 >= 10 && num3 <= 99) {
        cout << "Natija: " << num3 * 100 << endl;
    } else {
        cout << "Natija: " << num3 << endl;
    }

    return 0;
}
