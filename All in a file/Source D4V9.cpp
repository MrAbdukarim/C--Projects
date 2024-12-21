//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 9-vazifa **/
    /* Uch xonali son berilgan. Uni o’ngdan birinchi raqamni o’chirib, chap tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin. */
    cout << "Uch xonali sonni o'ngdan birinchi raqamni o'chirib, chap tarafiga yozishdan hosil bo'lgan sonni aniqlovchi dastur" << endl;

    int num;
    cin >> num;

    int birlarX = num % 10;
    int onlarX = num / 10 % 10;
    int yuzlarX = num / 100 % 10;

    cout << "Kiritilgan son: " << num << endl;
    cout << "Natija: " << birlarX << yuzlarX << onlarX << endl;

    return 0;
}