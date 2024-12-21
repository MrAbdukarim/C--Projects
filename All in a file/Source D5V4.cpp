//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /*1. Faylning hajmi baytlarda berilgan. Fayl hajmini to’liq kilobaytlarda ifodalovchi programma tuzilsin.*/
    cout << "Fayl hajmini to'liq kilobaytlarda ifodalab beruvchi dastur." << endl;
    cout << "hajmni kiriting: ";
    int format;
    cin >> format;

    int result = format / 1024;

    cout << "Natija: " <<  result << "Kb"<< endl << endl;


    /*2. Agar internet tezligi 750 kbayt/sekund bo'lsa 1.8 GBayt axborotni necha sekundda uzatish mumkinligini aniqlaydigan dastur tuzing. */
    double netSpeed = 750;
    double fileFormat= 1.8 * 1024 * 1024;
    double results = fileFormat / netSpeed;

    cout << "Natija: " << results << " sekund" << endl;

    return 0;
}