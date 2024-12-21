//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 9-vazifa **/
    /*int type da son berilgan. Faqat ko'paytirish amali orqali sonni 15 chi darajasini aniqlab ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 5 marta ishlatish mumkin)*/
    cout << "Kiritilgan sonni ko'paytirish amali orqali sonni 15 chi darajasini aniqlab beruvchi dastur."<< endl;
    cout << "Sonni kiriting: ";
    int x;
    cin >> x;

    int y = x * x;
    int z = y * y;
    int m = z * z;
    int n = m * z;
    int result = n * y * x;
    cout << "Kiritilgan sonni 15chi darajasi: " << result << endl;


    return 0;
}