//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 11-vazifa **/
    /* soat , minut , sekund berilgan. Bular jami necha minut bo'lishini aniqlo'vchi dastur tuzing. */

    int hour;
    cout << "Soatni kiriting: ";
    cin >> hour;

    int minuts;
    cout << "Minutni kiriting: ";
    cin >> minuts;

    int seconds;
    cout << "Sekundni kiriting: ";
    cin >> seconds;

    int results = hour * 60 + minuts + seconds / 60;

    cout << "Jami minutlar: " << results << endl;


    return 0;
}