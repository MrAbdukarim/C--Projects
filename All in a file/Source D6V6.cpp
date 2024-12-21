//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 6-vazifa **/
    /* 1. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Son raqamlarining 2 lasi ham 5 dan katta. */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    int birlikX = num %10;
    int onlikX = num / 10;

    bool result = (birlikX > 5 && onlikX > 5 );

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a soni berilgan. a soni 3 ga karrali. */

    int num2;
    cout << "Natural sonni kiriting V2: ";
    cin >> num2;

    bool result2 = (num2 % 3 == 0);

    cout << "Natija: " << boolalpha << result2 << endl;

    /* 3. Rostlikga tekshiring a soni berilgan. a soni 7 ga karrali. */

    int num3;
    cout << "Natural sonni kiriting V3: ";
    cin >> num3;
    bool result3 = (num3 % 7 == 0);

    cout << "Natija: " << boolalpha << result3 << endl;

    main();
    return 0;
}