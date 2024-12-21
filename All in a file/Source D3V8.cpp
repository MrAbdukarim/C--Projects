//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* int type 1 ta son berilgan. Shu sondan 1 ga katta va 1 ga kichik bo'lgan sonlarni ekranga chiqaruvchi dastur tuzing. */
    cout << "Berilgan sonni 1ga katta va 1ga kichik bo'lgan sonni aniqlab beruvchi dastur." << endl;

    int num;
    cout << "Sonni kiriting: ";
    cin >> num;

    cout << "Berilgan sondan 10ga katta son: " << num + 10 << endl;
    cout << "Berilgan sondan 15ga kichik son: " << num - 15 << endl;

    return 0;
}