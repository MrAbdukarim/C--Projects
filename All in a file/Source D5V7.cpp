//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 6-vazifa **/
    /*1.  Berilgan 2 ta sonni qiymatlarini almashtiring va yangi qiymatlarni ekranga chiqaruvchi dastur tuzing. (Qo'shimcha o'zgaruvchi ishlatmang).*/
    int x, y;
    cout << "Ikkita son kiriting (a va b): ";
    cin >> x >> y;

    cout << "Kiritilgan son oldin: a = " << x << ", b = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;
    cout << "Kiritilgan son keyin: a = " << x << ", b = " << y << endl;


    /*2. A, B va C sonlar berilgan. A ni qiymati B ga, B ni qiymati C ga va C ni qiymati A ga almashtirilsin. A, B va C ning yangi qiymatlarini ekranga chiqaruvchi dastur tuzing.*/
    int a, b, c;
    cout << "Uchta son kiriting: ";
    cin >> a >> b >> c;

    cout << "Kiritilgan sonlar oldin: a = " << a << ", b = " << b << ", c = " << c << endl;

    int d = a;
    a=b;
    b=c;
    c=d;

    cout << "Kiritilgan sonlar keyin: A = " << a << ", B = " << b << ", C= " << c << endl;

    return 0;
}