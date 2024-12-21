//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* 1.  int type da 1 ta 3 xonali son berilgan. Shu sonni raqamlar ko'paytmasini aniqlab ekranga chiqaring. */
    cout << "Berilgan 3 xonali sonni raqamlar ko'paytmasi aniqlab beruvchi dastur." << endl;
    int x;
    cout << "Sonni kiriting: ";
    cin >>x;
    int yuzlarX = x / 100 % 10;
    int onlarX = x / 10 % 10;
    int birlarX = x % 10;
    int sum = yuzlarX * onlarX * birlarX;

    cout << "Kiritilgan son: " << x << endl;
    cout << "Natija: " << sum << endl;

    /* 2.  int type da 1 ta 2 xonali son berilgan. Shu sonni raqamlar ko'paytmasini aniqlab ekranga chiqaring. */
    cout << "Berilgan 2 xonali sonni raqamlar ko'paytmasini aniqlab beruvchi dastur." << endl;

    int y;
    cout << "Sonni kiriting: ";
    cin >>y;
    int onlarX2 = y / 10 % 10;
    int birlarX2 = y % 10;
    int sum2 = onlarX2 * birlarX2;

    cout << "Kiritilgan son: " << y << endl;
    cout << "Natija: " << sum2 << endl;

    /* 3.  int type da 1 ta 5 xonali son berilgan. Shu sonni raqamlar yig'indisini aniqlab ekranga chiqaring.  */
    cout << "Berilgan 5 xonali sonni raqamlar yig'indisi aniqlab beruvchi dastur." << endl;
    int z;
    cout << "Sonni kiriting: ";
    cin >>z;
    int  millionlarX3 = z / 100 % 10;
    int minglarX3 = z / 100 % 10;
    int yuzlarX3 = z / 100 % 10;
    int onlarX3 = z / 10 % 10;
    int birlarX3 = z % 10;
    int sum3 =millionlarX3+ minglarX3 + yuzlarX3 + onlarX3 + birlarX3;

    cout << "Kiritilgan son: " << z << endl;
    cout << "Natija: " << sum3 << endl;

    /* 4. int type da 1 ta 3 xonali son berilgan. Shu sonni teskari qilib ekranga chiqaring.  */
    cout << "Berilgan 3 xonali sonni teskarisini aniqlab beruvchi dastur." << endl;
    int a;
    cout << "Sonni kiriting: ";
    cin >>a;
    int  yuzlarX4 = a / 100 % 10;
    int onlarX4 = a / 10 % 10;
    int birlarX4 = a % 10;

    cout << "Natija: " << birlarX4 << onlarX4 << yuzlarX4 << endl;

    return 0;
}