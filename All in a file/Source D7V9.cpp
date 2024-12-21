//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 9-vazifa **/
    /*3 xonali son berilgan. Agar shu sonni raqamlari bir xil bo'lsa o'nlar xonasidagi raqamni, aks holda birlar xonasidagi raqamni ekranga chiqaring. */
    int num;
    cout << "3 xonali sonni kiriting: ";
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    if (hundreds == tens && tens == ones) {
        cout << "Natija: " << tens << endl;
    } else {
        cout << "Natija: " << ones << endl;
    }
    main();
    return 0;
}
