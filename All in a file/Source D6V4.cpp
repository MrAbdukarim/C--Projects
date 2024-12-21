//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /* 1. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham toq va 2 xonali. */

    int num, num2;
    cout << "2ta natural sonni kiriting V1: ";
    cin >> num >> num2;

    bool juftValue = (num % 2 != 0 && num2 % 2 != 0 && num >= 10 && num <= 99 && num2 >= 10 && num2 <= 99);

    cout<< "Natija: " << boolalpha <<juftValue << endl;

    /* 2. Rostlikga tekshiring 1 ta 2 xonali natural son berilgan. Berilgan son raqamlari teng. */

    int num3;
    cout << "Natural sonni kiriting V2: ";
    cin >> num3;

    int birlikX = num3 %10;
    int onlikX = num3 / 10;

    bool result = ( birlikX == onlikX );

    cout<< "Natija: " << boolalpha << result << endl;

    main();
    return 0;
}