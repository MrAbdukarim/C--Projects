//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 4-vazifa **/
    /* 1.  2 ta son berilgan. Katta soni ekranga chiqarib beruvchi dastur tuzing. */
    cout << "Sonlarni kiriting: ";
    int num, num2;
    cin >> num >> num2;

    if (num > num2) {
        cout << "Katta son: " << num << endl;
    } else {
      cout << "Katta son: " << num2 << endl;
    }

    /* 2.  2 ta son berilgan. Kichik soni ekranga chiqarib beruvchi dastur tuzing. */
    cout << "Sonlarni kiriting V2: ";
    int num3, num4;
    cin >> num3 >> num4;

    if (num3 < num4) {
        cout << "Kichik son: " << num3 << endl;
    }else {
        cout << "Kichik son: " << num4 << endl;
    }

    /* 3.  2 ta son berilgan. Agar 2 lasi ham 2 xonali bo'lsa yig'indisini, aks holda ko'paytmasini aniqlab ekranga chiqaruvchi dastur tuzing. */
    cout << "Sonlarni kiriting V3: ";
    int num5, num6;
    cin >> num5 >> num6;

    if (num5 >=10 && num5 <=99 && num6 >= 10 && num6 <=99) {
        cout << "Natija: " << num5 + num6 << endl;
    }else {
        cout << "Natija: " << num5 * num6 << endl;
    }

    return 0;
}
