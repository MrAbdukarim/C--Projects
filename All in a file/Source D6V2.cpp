//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /* 1. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son 4 xonali */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    bool juftValue = (num >= 1000 && num <= 9999 );

    cout<< "Natija: " << boolalpha <<juftValue << endl;

    /* 2. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son juft va 2 xonali */

    int num2;
    cout << "Natural sonni kiriting V2: ";
    cin >> num2;

    bool toqValue = (num2 % 2 == 0 && num2 >=10 && num2 <= 99);

    cout<< "Natija: " << boolalpha <<toqValue << endl;

    /* 3. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son toq va 3 xonali */
    int num3;
    cout << "Natural sonni kiriting V3: ";
    cin >> num3;

    bool toqValue2 = ( num3 % 2 != 0  && num3 >= 100 && num3 <= 999 );

    cout<< "Natija: " << boolalpha <<toqValue2 << endl;
    main();
    return 0;
}