//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* 1. int type da 1 ta 4 xonali son berilgan. Shu sonni birlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring. */
    cout << "Berilgan 4 xonali sonni birlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib beruvchi dastur." << endl;
    int x;
    cout << "Sonni kiriting: ";
    cin >>x;
    int minglarX = x / 1000 % 10;
    int yuzlarX = x / 100 % 10;
    int onlarX = x / 10 % 10;
    int birlarX = x % 10;

    cout << "Kiritilgan son: " << x << endl;
    cout << "Natija: " << minglarX << yuzlarX << birlarX << onlarX << endl;

    /* 2. int type da 1 ta 3 xonali son berilgan. Shu sonni yuzlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring. */
    cout << "Berilgan 3 xonali sonni yuzlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib beruvchi dastur." << endl;

    int y;
    cout << "Sonni kiriting: ";
    cin >>y;
    int yuzlarY = y / 100 % 10;
    int onlarY = y / 10 % 10;
    int birlarY = y % 10;

    cout << "Kiritilgan son: " << y << endl;
    cout << "Natija: " << onlarY <<yuzlarY << birlarY << endl;

    return 0;
}