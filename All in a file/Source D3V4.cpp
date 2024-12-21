//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {

    /* 1. float type da 8 ta son berilgan. Shu sonlar o'rta arifmetigini aniqlab ekranga chiqaring. */
    cout << "1.Kiritilgan 8ta sonni o'rta arifmetigini aniqlab beruvchi dastur." << endl;

    cout << "Sonlarni kiriting:";
    float son1, son2,son3,son4,son5,son6,son7,son8;
    cin >> son1 >> son2 >> son3 >> son4 >> son5 >> son6 >> son7 >> son8;
    int sum = (son1+son2+son3+son4+son5+son6+son7+son8)/8;
    cout<< "Natijasi: " << sum << endl;

    /* 2.int type da 2 ta son berilgan. Bu sonlarni o'zaro qiymatlarini almashtirib beruvchi dastur tuzing.*/
    cout << "2.Kiritilgan 2ta sonni o'zaro qiymatlarini almashtirib bering." << endl;

    int a, b;
    cout << "2 ta sonni kiriting: ";
    cin >> a >> b;

    cout << "Qiymatlar almashdi: a = " << b << ", b = " << a << endl;


    /* 3.int type da minut berilgan. uni sekundga o'tgazib ekranga chiqaruvchi dastur tuzing. */
    cout << "3.Kiritilgan minutni sekundga o'tkazib beruvchi dastur." << endl;

    int min1;
    cout << "Minutni kiriting: ";
    cin >> min1;
    int sec = min1*60;
    cout <<"Natijasi: " << sec << "sekund" << endl;

   return 0;
}