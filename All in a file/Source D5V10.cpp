//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10-vazifa **/
    /* a ta binoda b ta qavat bor. Xar qavatda c tadan xona bor hamma xonada d tadan stul bor. Bu binolarda jami nechta parta borligini aniqlo'vchi dastur tuzing. (a,b,c,d consoledan qiymat oladi) (1 ta partaga 2 ta stul kerak) */
    int x, y, z, m;

    cout << "Binolar sonini kiriting: ";
    cin >> x;

    cout << "Qavatlar sonini kiriting: ";
    cin >> y;

    cout << "Xonalar sonini kiriting: ";
    cin >> z;

    cout << "Har bir xonadagi stullar sonini kiriting: ";
    cin >> m;

    int stullar = x * y * z * m;
    int partalar = stullar / 2;

    cout << "Jami partalar soni: " << partalar << endl;

    return 0;
}