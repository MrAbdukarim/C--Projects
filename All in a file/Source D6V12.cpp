//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 11  -vazifa **/
    /* 1. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 30 ga katta */

    int num, num2;
    cout << "Natural sonni kiriting V1: ";
    cin >> num >> num2;

    bool result = (num > num2 + 30);

    cout << "Natija: " << boolalpha << result << endl;

    /* 2. Rostlikga tekshiring. a , b , c , d sonlari berilgan. b soni eng katta va juft son. */

    int num3, num4, num5, num6;
    cout << "Natural sonni kiriting V2: ";
    cin >> num3 >> num4 >> num5 >> num6;

    bool result2 = (num4 > num3 && num4 > num5 && num4 > num6 && num4 % 2 == 0);

    cout << "Natija: " << boolalpha << result2 << endl;

    /* 3. Rostlikga tekshiring. a , b , c , d sonlari berilgan. c soni eng kichik va juft. */

    int num7, num8, num9, num10;
    cout << "Natural sonni kiriting V3: ";
    cin >> num7 >> num8 >> num9 >> num10;

    bool result3 = (num10 < num7 && num10 < num8 && num10 < num9 && num10 % 2 == 0);

    cout << "Natija: " << boolalpha << result3 << endl;


    main();
    return 0;
}