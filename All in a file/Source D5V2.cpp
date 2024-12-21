//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 2-vazifa **/
    /*1. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 8 chi darajasini aniqlab ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 3 marta ishlatish mumkin)*/
    int a;
    cout << "Sonni 8-darajaga oshirib beruvchi dastur." << endl;
    cout << "Sonni kiriting: ";
    cin >> a;

    int b= a*a;
    int c= b*b;
    int result= c*c;

    cout << "Natija: " << result << endl;


    /* 2. int type da soat va kun berilgan. Ular jami necha soat bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing. */
    cout << "Kiritilgan soat va kun berilgan. Ular jami necha soat bo'lishini aniqlab beruvchi dastur." << endl;
    cout << "soatni kiriting: ";
    int hour;
    cin >> hour;
    cout << endl << "kunni kiriting: ";
    int days;
    cin >> days;

    int results= days*24 + hour;

    cout << "Natija: " << results << " soat" << endl;

    return 0;
}