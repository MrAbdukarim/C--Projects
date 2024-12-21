//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* 1. int type da 1 ta 5 xonali son berilgan. Shu sonni minglar xonasidagi raqamni aniqlab ekranga chiqaring. */
    cout << "Berilgan 5 xonali sonni minglar xonasidagi raqamni aniqlab beruvchi dastur." << endl;

    int x;
    cout << "Sonni kiriting: ";
    cin >>x;
    x/=1000;
    x%= 10 ;

    cout << "Natija: " << x << endl;

    /* 2.  int type da 1 ta 4 xonali son berilgan. Shu sonni yuzlar xonasidagi raqamni aniqlab ekranga chiqaring. */
    cout << "Berilgan 4 xonali sonni yuzlar xonasidagi raqamni aniqlab beruvchi dastur." << endl;

    int y;
    cout << "Sonni kiriting: ";
    cin >>y;
    y /= 100;
    y %= 10;
    
    cout << "Natija: " << y << endl;

    /* 3.  int type da 1 ta 3 xonali son berilgan. Shu sonni raqamlar yig'indisini aniqlab ekranga chiqaring. */
    cout << "Berilgan 3 xonali sonni raqamlar yig'indisi aniqlab beruvchi dastur." << endl;

    int z;
    cout << "Sonni kiriting: ";
    cin >>z;
    int yuzlarX = z / 100 % 10;
    int onlarX = z / 10 % 10;
    int birlarX = z % 10;
    int sum = yuzlarX + onlarX + birlarX;

    cout << "Kiritilgan son: " << z << endl;
    cout << "Natija: " << sum << endl;

    main();
    return 0;
}