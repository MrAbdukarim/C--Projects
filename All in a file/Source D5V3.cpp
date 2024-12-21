//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /*1. int type da hafta va soat berilgan. Ular jami necha kun bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.*/
    int a;
    cout << "Kiritilgan hafta va soat berilgan. Ular jami necha kun bo'lishini aniqlab beruvchi dastur." << endl;
    cout << "haftani kiriting: ";
    int week;
    cin >> week;
    cout << endl << "soatni kiriting: ";
    int hours;
    cin >> hours;

    int result = hours / 24 + 7 * week;

    cout << "Natija: " <<  result << "kun"<< endl << endl;


    /*2.  int type da minut va soat berilgan. Ular jami necha sekund bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing. */
    cout << "Kiritilgan minut va soat ni necha sekund bo'lishini aniqlab beruvchi dastur." << endl;
    cout << "minutni kiriting: ";
    int minuts;
    cin >> minuts;
    cout << endl << "soatni kiriting: ";
    int hour;
    cin >> hour;

    int results= 60*minuts + 3600* hour;

    cout << "Natija: " << results << " sekund" << endl;

    return 0;
}