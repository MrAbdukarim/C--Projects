//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 1-vazifa **/
    /* 1. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar musbat bo'lsa "musbat" ni, aks holda "musbat emas" ni ekranga chiqaruvchi dastur tuzing.  */
    cout << "Sonni kiriting: ";
    int n;
    cin >> n;

    if (n > 0) {
        cout << "Musbat" << endl;
    } else if (n < 0) {
        cout << "Musbat emas" << endl;
    } else if (n == 0) {
        cout << "Na musbat, na manfiy" << endl;
    }

    /* 2. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar 2 xonali bo'lsa "C++" ni, aks holda "C#" ekranga chiqaruvchi dastur tuzing. */
    cout << "Sonni kiriting V2: ";
    int num;
    cin >> num;

    if (num >= 10 && num <= 99) {
        cout << "C++" << endl;
    } else {
        cout << "C#" << endl;
    }

    /* 2. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar 2 xonali bo'lsa "C++" ni, aks holda "C#" ekranga chiqaruvchi dastur tuzing. */
    cout << "Sonni kiriting V3: ";
    int num1;
    cin >> num1;
    if (num1 % 2 == 0) {
        cout << "juft" << endl;
    } else {
        cout << "juft emas" << endl;
    };

    main();
    return 0;
}
