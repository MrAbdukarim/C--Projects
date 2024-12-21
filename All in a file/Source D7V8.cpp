//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 8-vazifa **/
    /* 2 xonali son berilgan. Agar shu sonni raqamlari bir xil bo'lsa birlar xonasidagi raqamni, aks holda o'nlar xonasidagi raqamni ekranga chiqaring. */
    int num;
    cout << "2 xonali sonni kiriting: ";
    cin >> num;

    int tens = num / 10;
    int ones = num % 10;

    if (tens == ones) {
        cout << "Natija: " << ones << endl;
    } else {
        cout << "Natija: " << tens << endl;
    }
    main();
    return 0;
}
