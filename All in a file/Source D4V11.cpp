//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 11-vazifa **/
    /* Beetwise yordamida ishlang. Berilgan 1 ta sonni 8 ga ko'paytirib, chiqaring. */
    cout << "Beetwise yordamida berilgan sonni 8ga bo'lib beruvchi dastur" << endl;
    cout << "Sonni kiriting: " << endl;

    int num;
    cin >> num;

    cout << "Kiritilgan son: "<<num << endl;
    cout << "Natija: " << (num << 3) << endl; ;

    return 0;
}