//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 8-vazifa **/
    /* 1. Rostlikga tekshiring a soni berilgan. a soni 5 ga bo'linmaydi. */

    int num;
    cout << "Natural sonni kiriting V1: ";
    cin >> num;

    bool result = (num % 5 !=0);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring a sonni berilgan. a soni 4 ga bo'linib 3 ga bo'linmaydi  */

    int num2;
    cout << "Natural sonni kiriting V2: ";
    cin >> num2;

    bool result2 = (num2 % 4 == 0 && num2 % 3 != 0);

    cout << "Natija: " << boolalpha << result2 << endl;

    /* 3. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan katta. */

    int num3, num4;
    cout << "2ta natural sonni kiriting V3: ";
    cin >> num3 >> num4;
    bool result3 = (num3 > num4);

    cout << "Natija: " << boolalpha << result3 << endl;

    /* 4. Rostlikga tekshiring a va b sonlari berilgan. a soni b soniga teng. */

    int num5, num6;
    cout << "2ta natural sonni kiriting V4: ";
    cin >> num5 >> num6;
    bool result4 = (num5 == num6);

    cout << "Natija: " << boolalpha << result4 << endl;

    main();
    return 0;
}