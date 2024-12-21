//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 10-vazifa **/
    /* Beetwise yordamida ishlang. Berilgan 1 ta sonni 4 ga bo'lib, chiqaring. */
    cout << "Beetwise yordamida berilgan sonni 4ga bo'lib beruvchi dastur" << endl;
    cout << "Sonni kiriting: " << endl;

    int num;
    cin >> num;

    cout << "Kiritilgan son: "<<num << endl;
    cout << "Natija: " << (num >> 2) << endl;

    main();
    return 0;
}