//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* 5. int type da 1 ta son berilgan. Shu sonni kubga ga oshirib ekranga chiqaring. */
    cout << "5 .Kiritilgan sonni 3-darajaga oshirib beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber;
    cin >> EnterNumber;
    EnterNumber *= EnterNumber * EnterNumber;

    cout << "Natija: " << EnterNumber << endl;


    /* 6. int type da 1 ta son berilgan. Shu sonni 5 chi darajaga ga oshirib ekranga chiqaring. */
    cout << "6.Kiritilgan sonni 5-darajaga oshiribe beruvchi dastur." << endl;

    cout << "Sonni kiriting; ";
    int EnterNumber2;
    cin >> EnterNumber2;
    EnterNumber2 *= (EnterNumber2 * EnterNumber2 * EnterNumber2 * EnterNumber2);

    cout << "Natija: " << EnterNumber2 << endl;


    /* 7. int type da 2 ta son berilgan. Shu sonlar yig'indisi aniqlab ekranga chiqaring. */
    cout << "7.Kiritilgan sonni 2 sonni qo'shib beruvchi dastur." << endl;

    cout << "1-sonni kiriting: ";
    int EnterNumber3;
    cin >> EnterNumber3;
    cout<< "2-sonni kiriting: ";
    int EnterNumNext3;
    cin >> EnterNumNext3;
    int result = EnterNumber3 + EnterNumNext3;

    cout << "Natija: " << result << endl;


    /*  int type da 2 ta son berilgan. Shu sonlar ko'paytmasini aniqlab ekranga chiqaring.*/
    cout << "8.Kiritilgan 2 sonni ko'paytmasini aniqlab beruvchi dastur." << endl;

    cout << "1-sonni kiriting: ";
    int EnterNumber4;
    cin >> EnterNumber4;
    cout<< "2-sonni kiriting: ";
    int EnterNumNext4;
    cin >> EnterNumNext4;
    int Result = EnterNumber4 * EnterNumNext4;

    cout << "Natija: " << Result << endl;

    return 0;
}