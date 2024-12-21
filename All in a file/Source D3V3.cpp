//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* int type da 4 ta son berilgan. Shu sonlar yig'indisi aniqlab ekranga chiqaring. */
    cout << "1 .Kiritilgan sonni 4ta sonni yig'indisini aniqlab beruvchi dastur." << endl;

    int son1,son2,son3,son4;
    cout << "Sonlarni kiriting; ";
    cin >> son1 >> son2 >> son3 >> son4;
    int sum = son1 + son2 + son3 + son4;

    cout << "Natija: " << sum << endl;


    /* float type da 3 ta son berilgan. Shu sonlar o'rta arifmetigini aniqlab ekranga chiqaring. */
    cout << "2.Kiritilgan 3ta sonni o'rta arifmetigini aniqlab beruvchi dastur." << endl;

    float son5,son6, son7;
    cout << "Sonni kiriting; ";
    cin >> son5 >> son6 >> son7;
    int sum2 = (son5+son6+son7) / 3;

    cout << "Natija: " << sum2 << endl;

    /* 3. float type da 5 ta son berilgan. Shu sonlar o'rta arifmetigini aniqlab ekranga chiqaring. */
    cout << "3.Kiritilgan sonni 5ta sonni o'rta arifmetigini aniqlab beruvchi dastur." << endl;

    float son8,son9,son10,son11,son12;
    cout << "Sonni kiriting; ";
    cin >> son8 >> son9 >> son10 >> son11 >> son12;
    int sum3 = (son8 + son9 + son10 + son11 + son12) / 5;

    cout << "Natija: " << sum3 << endl;

    return 0;
}