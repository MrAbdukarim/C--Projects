//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 6-vazifa **/
    /*1. Patrikda pul bor, Juliada pul bor. Bunda Patrikning pullari Julianikidan ko’p. Patrik Juliaga qancha pul bersa ulardagi pul miqdori tenglashadi?*/

    cout << "Patrikni tahminiy pulini kiriting: ";
    int moneyP;
    cin >> moneyP;
    cout << "Juliani tahminiy pulini kiriting: ";
    int moneyJ;
    cin >> moneyJ;

    int sum = (moneyP - moneyJ) / 2;
    cout << "Tenglashish uchun Patrik Juliaga " << sum << " so'm berishi kerak."<< endl;



    /*2. Km bilan metr berilgan. Bular jami necha Dm bo'lishini aniqlang.*/
    int km;
    cout << "Km kiriting: ";
    cin >> km;
    int metr;
    cout << "Metrni kiriting: ";
    cin >> metr;
    int dm = (km * 1000 + metr) * 10;
    cout << "Jami: " << dm << endl;

    return 0;
}