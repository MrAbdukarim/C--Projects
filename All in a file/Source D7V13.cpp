//
// Created by MrAbdukarim on 10/1/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10-vazifa **/
    /* 5 xonali son berilgan. Shu son ichidagi eng katta raqamni aniqlang (basseyin logika). */
    int number;
    cout << "5 xonali sonni kiriting: ";
    cin >> number;

    int ones = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = (number / 1000) % 10;
    int tenThousands = (number / 10000) % 10;

    int largest = tenThousands;

    if (largest < thousands) {
        largest = thousands;
    }
    if (largest < hundreds) {
        largest = hundreds;
    }
    if (largest < tens) {
        largest = tens;
    }
    if (largest < ones) {
        largest = ones;
    }

    cout << "Eng katta raqam: " << largest << endl;
    return 0;
}
