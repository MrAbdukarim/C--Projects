//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /* 1. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son juft va 4 xonali */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    bool juftValue = ( num % 2 ==0 && num >= 1000 && num <= 9999 );

    cout<< "Natija: " << boolalpha <<juftValue << endl;

    /* 2. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham toq */

    int num2, num3;
    cout << "2ta natural sonni kiriting V2: ";
    cin >> num2 >> num3;

    bool toqValue = (num2 && num3 % 2 != 0 );

    cout<< "Natija: " << boolalpha <<toqValue << endl;

    /* 3. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham juft. */
    int num4, num5;
    cout << "2ta natural sonni kiriting V3: ";
    cin >> num4 >> num5;

    bool juftValue3 = (num2 % 2 == 0 && num3 % 2 == 0 );

    cout<< "Natija: " << boolalpha << juftValue3 << endl;
    main();
    return 0;
}