//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 1-vazifa **/
    /*1. int type da son berilgan. Faqat ko'paytirish amali orqali  sonni 4 chi darajasini aniqlab ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 2 marta ishlatish mumkin) */
    int a;
    cout << "Sonni 4-darajaga oshirib beruvchi dastur." << endl;
    cout << "Sonni kiriting: ";
    cin >> a;

    int b= a*a;
    int c= b*b;

    cout << "Natija: " << c << endl;


    /* 2. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 6 chi darajasini aniqlab ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 3 marta ishlatish mumkin) */
    int x;
    cout << "Sonni 6-darajaga oshirib beruvchi dastur." << endl;
    cout << "Sonni kiriting: ";
    cin >> x;

    int y= x*x;
    int z= y*y*y;
    cout << "Natija: " << z << endl;

    return 0;
}