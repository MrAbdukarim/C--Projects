//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* 1. int type da 1 ta 4 xonali son berilgan. Shu sonni minglar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring. */
    cout << "Berilgan 4 xonali sonni minglar va o'nlar xonasidagi raqamlarni o'zaro almashtirib beruvchi dastur." << endl;
    int x;
    cout << "Sonni kiriting: ";
    cin >>x;
    int minglarX = x / 1000 % 10;
    int yuzlarX = x / 100 % 10;
    int onlarX = x / 10 % 10;
    int birlarX = x % 10;

    cout << "Kiritilgan son: " << x << endl;
    cout << "Natija: " << onlarX << yuzlarX << minglarX << birlarX << endl;

    /* 2. int type da gb berilgan. GB ni MB ga o'tkazib ekranga chiqaruvchi dastur tuzing.  */
    cout << "Kiriltilgan GB ni MB ga almashtirib beruvchi dastur." << endl;

    int y;
    cout << "Hajmini kiriting: ";
    cin >>y;
    y *= 1024;

    cout << "Natija: " << y << endl;
    return 0;
}