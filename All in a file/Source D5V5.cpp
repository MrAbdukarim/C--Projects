//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /*1. int type da dollar va yevro berilgan. Ular jami necha so'm bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
(Eslatman : 1 dollar = 12600 so'm, 1 yevro = 14500 so'm deb hisoblansin)*/
    cout << "Kiritilgan dollar va yevroni o'zbek so'mida hisoblab beruvchi dastur." << endl;
    cout << "Dollar miqdorini kiriting: ";
    int dollar;
    cin >> dollar;
    cout << endl << "Yevro miqdorini kiriting: ";
    int yevro;
    cin >> yevro;

    int result = dollar * 12600 + yevro * 14500;

    cout << "Natija: " <<  result << "so'm"<< endl << endl;


    /*2. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 10 chi darajasini aniqlab ekranga chiqaring.
(Eslatma: ko'paytish amalini faqat 4 marta ishlatish mumkin)*/
    cout << "Kiritilgan sonni 10-darajasini aniqlab beruvchi dastur." << endl;
    cout << "Sonni kiriting: ";
    int a;
    cin >> a;

    int b = a * a;
    int c = b*b;
    int d = c*c;
    int e = b*d;

    cout << "Natija: " << e << endl;

    return 0;
}