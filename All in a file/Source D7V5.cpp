//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 5-vazifa **/
    /*1. 2 ta son berilgan. Agar 2 lasi ham juft bo'lsa yig'indisini, aks holda ko'paytmasini aniqlab ekranga chiqaruvchi dastur tuzing. */
    cout << "Sonlarni kiriting: ";
    int num, num2;
    cin >> num >> num2;

    if (num % 2 == 0 && num2 % 2 == 0) {
        cout << "Natija: " << num + num2 << endl;
    } else {
        cout << "Natijasi: " << num * num2 << endl;
    }

    /* 2. 2 ta son berilgan. Agar 2 lasi ham toq bo'lsa ko'paytmasini, aks holda berilgan sonlarni ekranga chiqaruvchi dastur tuzing. */
    cout << "Sonlarni kiriting V2: ";
    int num3, num4;
    cin >> num3 >> num4;

    if (num3 % 2 != 0 && num4 % 2 != 0) {
        cout << "Natija: " << num3 * num4 << endl;
    } else {
        cout << "Kichik son: " << num3 << num4 << endl;
    }

    /* 3. 3 ta son berilgan. Shu sonlar ichida nechta toq son borligini aniqlovchi dastur tuzing. */
    cout << "Sonlarni kiriting V3: ";
    int num5, num6, num7;
    cin >> num5 >> num6 >> num7;

    if (num5 % 2 != 0) {
        cout << "Natija: " << num5 << endl;
    } else if (num6 % 2 != 0) {
        cout << "Natija: " << num6 << endl;
    } else if (num7 % 2 != 0) {
        cout << "Natija: " << num7 << endl;
    } else {
        cout << "Toq so topilmadi!" << endl;
    }

    return 0;
}
