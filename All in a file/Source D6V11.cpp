//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 11  -vazifa **/
    /* 1. Rostlikga tekshiring a va b sonlari berilgan. b soni a sonidan 5 barobar katta. */

    int num, num2;
    cout << "Natural sonni kiriting V1: ";
    cin >> num >> num2;

    bool result = (num2 == num * 5);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a va b sonlari berilgan. Ixtiyoriy bittasi 2 chisidan 4 barobar katta. */

    int num3, num4;
    cout << "Natural sonni kiriting V2: ";
    cin >> num3 >> num4;

    bool result2 = (num3 > 2 * 4 || num4 > 2 * 4);

    cout << "Natija: " << boolalpha << result2 << endl;

    main();
    return 0;
}