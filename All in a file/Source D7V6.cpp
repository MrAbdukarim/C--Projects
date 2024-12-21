//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 5-vazifa **/
    /*1. 1 ta 4 xonali son berilgan. Shu son tarkibidagi juft raqamlar miqdorini aniqlang. */
    cout << "4 xonali sonni kiriting: ";
    int num;
    cin >> num;

    int mingX = num / 1000;
    int yuzlarX = (num / 100) % 10;
    int onlarX = (num / 10) % 10;
    int birlarX = num % 10;

    int sum = 0;

    if (mingX % 2 == 0) {
        sum++;
    }
    if (yuzlarX % 2 == 0) {
        sum++;
    }
    if (onlarX % 2 == 0) {
        sum++;
    }
    if (birlarX % 2 == 0) {
        sum++;
    }

    cout << "Natija: " << sum << "ta juft son" << endl;


    /* 2. 5 ta son berilgan. Shu sonlar ichida nechta juft son borligini aniqlovchi dastur tuzing. */
    cout << "5ta sonlarni kiriting V2: ";
    int num2, num3, num4, num5, num6;
    cin >> num2 >> num3 >> num4 >> num5 >> num6;

    int sum2 = 0;

    if (num2 % 2 == 0) {
        sum2++;
    }
    if (num3 % 2 == 0) {
        sum2++;
    }
    if (num4 % 2 == 0) {
        sum2++;
    }
    if (num5 % 2 == 0) {
        sum2++;
    }
    if (num6 % 2 == 0) {
        sum2++;
    }

    cout << "Natija: " << sum2 << "ta juft son" << endl;

    /* 3. 5 ta son berilgan. Shu sonlar ichida nechta musbat son borligini aniqlovchi dastur tuzing. */
    cout << "5ta sonlarni kiriting V2: ";
    int num7, num8, num9, num10, num11;
    cin >> num7 >> num8 >> num9 >> num10 >> num11;

    int sum3 = 0;

    if (num7 > 0) {
        sum3++;
    }
    if (num8 > 0) {
        sum3++;
    }
    if (num9 > 0) {
        sum3++;
    }
    if (num10 > 0) {
        sum3++;
    }
    if (num11 > 0) {
        sum3++;
    }

    cout << "Natija: " << sum3 << "ta musbat son" << endl;
    main();
    return 0;
}
