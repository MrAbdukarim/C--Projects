//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 6-vazifa **/
    /* 1. Rostlikga tekshiring a soni berilgan. a soni 3 ga va 8 ga karrali. */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    bool result = (num % 3 ==0 && num % 8 == 0);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a soni berilgan. a soni 7 ga yoki 9 karrali. */

    int num2;
    cout << "Natural sonni kiriting V2: ";
    cin >> num2;

    bool result2 = (num2 % 7 == 0 && num2 % 9 == 0);

    cout << "Natija: " << boolalpha << result2 << endl;

    /* 3. Rostlikga tekshiring a soni berilgan. a soni 3 ga karrali. */

    int num3;
    cout << "Natural sonni kiriting V3: ";
    cin >> num3;
    bool result3 = (num3 % 3 == 0);

    cout << "Natija: " << boolalpha << result3 << endl;

    main();
    return 0;
}