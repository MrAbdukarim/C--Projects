//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* Uch xonali son berilgan. Uni chapdan birinchi raqamni o’chirib, o’n tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin. */
    cout << "Uch xonali sonni chapdan birinchi raqamni o’chirib, o’n tarafiga yozishdan hosil bo’lgan sonni aniqlovchi" << endl;

    int num;
    cin >> num;

    int birlarX = num % 10;
    int onlarX = num / 10 % 10;
    int yuzlarX = num / 100 % 10;

    cout << "Kiritilgan son: " << num << endl;
    cout << "Natija: " << onlarX << birlarX << yuzlarX<< endl;

    return 0;
}