//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* int type 1 ta son berilgan. Shu sondan 3 barobar, 4 barobar va 5 barobar katta bo'lgan sonlarni ekranga chiqaruvchi dastur tuzing. */
    cout << "Berilgan sondan 3 barobar, 4 barobar va 5 barobar katta bo'lgan sonlarni aniqlab beruvchi dastur." << endl;

    int num;
    cout << "Sonni kiriting: ";
    cin >> num;

    cout << "3 karra katta: " << num * 3 << endl;
    cout << "4 karra katta: " << num * 4 << endl;
    cout << "5 karra katta: " << num * 5 << endl;


    return 0;
}