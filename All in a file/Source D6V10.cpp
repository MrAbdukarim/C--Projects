//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10  -vazifa **/
    /*1. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kichigi b. */

    int num, num2, num3;
    cout << "Natural sonni kiriting V1: ";
    cin >> num >> num2>> num3;

    bool result = (num2 < num && num2 < num3);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 2 barobar katta. */

    int num4, num5;
    cout << "Natural sonni kiriting V2: ";
    cin >> num4 >> num5;

    bool result2 = (num4 == num5 * 2);

    cout << "Natija: " << boolalpha << result2 << endl;

    main();
    return 0;
}