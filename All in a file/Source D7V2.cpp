//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 1-vazifa **/
    /* 1.  1 ta son berilgan. Agar son 100 dan katta bo'lsa uni qiymatini 20 ga oshirib, aks holda o'zini ekranga chiqaring.  */
    cout << "Sonni kiritig: ";
    int num;
    cin >> num;

    if (num > 100) {
        cout << "Natija: " << num + 2 << endl;
    } else {
        cout << "Natija: " << num << endl;
    }

    /* 2.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 ga oshirib, aks holda o'zini ekranga chiqaring. */
    cout << "Sonni kiriting V2: ";
    int num2;
    cin >> num2;

    if (num2 % 2 == 0) {
        cout << "Natija: " << num2 + 10 << endl;
    } else {
        cout << "Natija: " << num2 << endl;
    }

    /* 3.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 ga kamaytirib, aks holda o'zini ekranga chiqaring. */
    cout << "Sonni kiriting V3: ";
    int num3;
    cin >> num3;

    if (num3 % 2 != 0) {
        cout << "Natija: " << num3 - 10 << endl;
    } else {
        cout << "Natija: " << num3 << endl;
    }
    return 0;
}
