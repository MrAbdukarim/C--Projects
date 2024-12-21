//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* 1.  int type da 1 ta 2 xonali son berilgan. Shu sonni birlar xonasidagi raqamni aniqlab ekranga chiqaring. */
    cout << "Berilgan 2 xonali sonni birlar xonasidagi raqamni aniqlab beruvchi dastur." << endl;

    int x;
    cout << "Sonni kiriting: ";
    cin >>x;
    x%= 10 ;

    cout << "Natija: " << x << endl;

    /*2.  int type da 1 ta 3 xonali son berilgan. Shu sonni o'nlar xonasidagi raqamni aniqlab ekranga chiqaring. */
    cout << "Berilgan 3 xonali sonni o'nlar xonasidagi raqamni aniqlab beruvchi dastur." << endl;

    int y;
    cout << "Sonni kiriting: ";
    cin >>y;
    y /= 10;
    y %= 10;
    
    cout << "Natija: " << y << endl;

    /*3.  int type da 1 ta 3 xonali son berilgan. Shu sonni yuzlar xonasidagi raqamni aniqlab ekranga chiqaring. */
    cout << "Berilgan 3 xonali sonni yuzlar xonasidagi raqamni aniqlab beruvchi dastur." << endl;

    int z;
    cout << "Sonni kiriting: ";
    cin >>z;
    z /= 100;
    z %= 10;

    cout << "Natija: " << z << endl;

    main();
    return 0;
}