//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10-vazifa **/
    /* 6 son berilgan. Shu sonlar ichidan eng kattasini aniqlang (basseyin logika). */
    int number, number2, number3, number4, number5, number6;

    cout << "1-soni kiriting: ";
    cin >> number;
    cout << "2-soni kiriting: ";
    cin >> number2;
    cout << "3-soni kiriting: ";
    cin >> number3;
    cout << "4-soni kiriting: ";
    cin >> number4;


    int smallest = number;

    if (smallest > number2) {
        smallest = number2;
    }
    if (smallest > number3) {
        smallest = number3;
    }
    if (smallest > number4) {
        smallest = number4;
    }

    cout << "Eng kichik son: " << smallest << endl;

    return 0;
}
