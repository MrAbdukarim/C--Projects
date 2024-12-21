//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* 1. int type da gb berilgan. Gbni Bit ga o'tkazib ekranga chiqaruvchi dastur tuzing. */
    cout << "Kiriltilgan GB ni Bit ga almashtirib beruvchi dastur." << endl;

    int gb;
    cout << "GB hajmini kiriting: ";
    cin >> gb;

    int bit = gb * 1024 * 1024 * 1024 * 8;

    cout << "Natija: " << bit << " Bit" << endl;

    /* 2. int type da gb berilgan. GB ni TB ga o'tkazib ekranga chiqaruvchi dastur tuzing. */
    cout << "Kiriltilgan GB ni Bit ga almashtirib beruvchi dastur." << endl;

    int GB;
    cout << "GB hajmini kiriting: ";
    cin >> GB;
    int TB = GB * 1024;

    cout << "Kiritilgan hajm: " << GB << " GB" << endl;
    cout << "Natija: " << TB << " TB" << endl;

    /* 3. int type da gb li fleshka berilgan. Shu fleshkaga 2 gb li kinodan nechta siqishini aniqlab beruvchi dastur tuzing.*/
    cout << "Kiritilgan USB hajmiga nechta 2 GB li kino ketishini aniqlab beruvchi dastur." << endl;

    int usb;
    cin >> usb;
    float vd = usb / 2;

    cout << "USB hajmi: " << usb << " GB" << endl;
    cout << "Natija: " << vd << " ta kino ketadi" << endl;

    return 0;
}