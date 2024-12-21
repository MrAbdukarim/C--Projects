//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10-vazifa **/
    /*3 xonali son berilgan. Agar shu son chapdan ham o'ngdan ham bir hil o'qilsa raqamlar yig'indisini, aks holda raqamlar ko'paytmasini ekranga chiqaruvchi dastur tuzing. */
    int num;
    cout << "3 xonali sonni kiriting: ";
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    if (hundreds == ones) {
        cout << "Natija: " << hundreds + tens + ones << endl;
    } else {
        cout << "Natija: " << hundreds * tens * ones << endl;
    }
    main();
    return 0;
}
