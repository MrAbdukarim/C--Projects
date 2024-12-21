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
    cout << "5-soni kiriting: ";
    cin >> number5;
    cout << "6-soni kiriting: ";
    cin >> number6;

    int largest = number;

    if (largest < number2) {
        largest = number2;
    }
    if (largest < number3) {
        largest = number3;
    }
    if (largest < number4) {
        largest = number4;
    }
    if (largest < number5) {
        largest = number5;
    }
    if (largest < number6) {
        largest = number6;
    }

    cout << "Eng katta son: " << largest << endl;

    return 0;
}
