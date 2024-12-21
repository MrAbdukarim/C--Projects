//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 5-vazifa **/
    /* 1. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlari yig‘indis 10 dan katta. */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    int birlikX = num %10;
    int onlikX = num / 10;

    bool result = (birlikX + onlikX > 10 );

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlari ko‘paytmasi 20 dan katta */

    int num2;
    cout << "Natural sonni kiriting V2: ";
    cin >> num2;

    int birlikX2 = num2 %10;
    int onlikX2 = num2 / 10;

    bool result2 = (birlikX2 * onlikX2 > 20 );

    cout << "Natija: " << boolalpha << result2 << endl;

    /* 3. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlarini 2 lasi ham toq. */

    int num3;
    cout << "Natural sonni kiriting V3: ";
    cin >> num3;

    int birlikX3 = num3 %10;
    int onlikX3 = num3 / 10;

    bool result3 = (birlikX3 % 2 != 0 && onlikX3 % 2 != 0 );

    cout << "Natija: " << boolalpha << result3 << endl;

    main();
    return 0;
}