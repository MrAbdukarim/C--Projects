//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 9-vazifa **/
    /*1. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kattasi a. */

    int num, num2, num3;
    cout << "Natural sonni kiriting V1: ";
    cin >> num >> num2>> num3;

    bool result = (num > num2 && num > num3);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kattasi c. */

    int num4, num5, num6;
    cout << "Natural sonni kiriting V2: ";
    cin >> num4 >> num5 >> num6;

    bool result2 = (num6 > num4 && num6 > num5);

    cout << "Natija: " << boolalpha << result2 << endl;
    
    main();
    return 0;
}