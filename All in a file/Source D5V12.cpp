//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 11-vazifa **/
    /* X, Y, A va B sonlar berilgan. X kg konfet A so‘m turadi va Y kg shokolad B so‘m turadi. 1 kg shokolad 1 kg konfetdan qancha qimmat turishini aniqlovchi dastur tuzilsin. X, Y, A va B o’zgaruvchilari qiymati ekrandan kiritilsin. */
    double X, Y, A, B;

        cout << "Konfetning kilogrammini kiriting: ";
        cin >> X;
        cout << "Konfetning umumiy narxini kiriting: ";
        cin >> A;
        cout << "Shokoladning kilogrammini kiriting: ";
        cin >> Y;
        cout << "Shokoladning umumiy narxini kiriting: ";
        cin >> B;

        double sumK = A / X;
        double sumSh = B / Y;

        double results = sumSh - sumK;

        cout << "1 kg shokolad 1 kg konfettan " << results << " so'm qimmatroq." << endl;


    return 0;
}