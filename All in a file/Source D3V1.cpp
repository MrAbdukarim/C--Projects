//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /*  int type da 1 ta son berilgan. Shu sonni 10 ga oshirib ekranga chiqaring. */
    cout << "1.Kiritilgan sonni 10 oshirib beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber;
    cin >> EnterNumber;
    EnterNumber += 10;

    cout << "Yig'indi: " << EnterNumber << endl;


    /* int type da 1 ta son berilgan. Shu sonni 10 ga kamaytirib ekranga chiqaring. */
    cout << "2.Kiritilgan sonni 10 kamaytirib beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber2;
    cin >> EnterNumber2;
    EnterNumber2 -= 10;

    cout << "Natija: " << EnterNumber2 << endl;


    /* int type da 1 ta son berilgan. Shu sonni 10 marta oshirib ekranga chiqaring. */
    cout << "3.Kiritilgan sonni 10 martaga oshirib beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber3;
    cin >> EnterNumber3;
    EnterNumber3 *= 10;

    cout << "Natija: " << EnterNumber3 << endl;


    /* nt type da 1 ta son berilgan. Shu sonni kvadratga oshirib ekranga chiqaring. */
    cout << "4.Kiritilgan sonni kavdratga oshirib beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber4;
    cin >> EnterNumber4;
    EnterNumber4 *= EnterNumber4;

    cout << "Natija: " << EnterNumber4 << endl;
    return 0;



}