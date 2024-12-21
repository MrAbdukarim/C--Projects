//
// Created by MrAbdukarim on 9/17/2024.
//

#include <iostream>
using namespace std;

int main() {
    /* int type da gb li fleshka berilgan. Shu fleshkaga 5 gb li kinodan nechta siqishini aniqlab beruvchi dastur tuzing. */
    cout << "Kiritilgan USB hajmiga nechta 5 GB li kino ketishini aniqlab beruvchi dastur." << endl;

    int usb;
    cout << "USB hajmini kiriting: ";
    cin >> usb;
    float vd = usb / 5;

    cout << "USB hajmi: " << usb << " GB" << endl;
    cout << "Natija: " << vd << " ta kino ketadi" << endl;

    main();
    return 0;
}