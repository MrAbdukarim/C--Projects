//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 5-vazifa **/
    /*1. 5 ta son berilgan. Shu sonlar ichida musbat sonlarni miqdorini va yig'indisini aniqlang. */
    cout << "5ta sonlarni kiriting V2: ";
    int num, num1, num2, num3, num4;
    cin >> num >> num1 >> num2 >> num3 >> num4;

    int sum = 0;
    int yigindisi = 0;

    if (num > 0) {
        sum++;
        yigindisi += num;
    }
    if (num1 > 0) {
        sum++;
        yigindisi += num1;
    }
    if (num2 > 0) {
        sum++;
        yigindisi += num2;
    }
    if (num3 > 0) {
        sum++;
        yigindisi += num3;
    }
    if (num4 > 0) {
        sum++;
        yigindisi += num4;
    }

    cout << "Musbat sonlar miqdori: " << sum << endl;
    cout << "Yigindisi: " << yigindisi << endl;

    /*2. 5 ta son berilgan. Shu sonlar ichida nechta 2 xonali son borligini aniqlovchi dastur tuzing. */
    cout << "5ta sonlarni kiriting V2: ";
    int num5, num6, num7, num8, num9;
    cin >> num5 >> num6 >> num7 >> num8;

    int sum2 = 0;

    if (num5 >= 10 && num5 <= 99) {
        sum2++;
    }
    if (num6 >= 10 && num6 <= 99) {
        sum2++;
    }
    if (num7 >= 10 && num7 <= 99) {
        sum2++;
    }
    if (num8 >= 10 && num8 <= 99) {
        sum2++;
    }
    if (num9 >= 10 && num9 <= 99) {
        sum2++;
    }

    cout << "2 xonali sonlar miqdori: " << sum2 << endl;

    return 0;
}
