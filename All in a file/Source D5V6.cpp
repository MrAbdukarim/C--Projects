//
// Created by MrAbdukarim on 9/29/2024.
//

#include <iostream>
using namespace std;

int main() {
    /** 6-vazifa **/
    /*1. Anvarning planshetida 720 sahifali elektron kitob bor. Har bir sahifada 50 ta qator bor, har bir qatorda o‘rtacha 152 tadan belgi bor. Agar bitta belgi kompyuter xotirasidan 1 bayt joy egallasa, elektron kitobning hajmi necha MB bo‘ladi?*/
    cout << "Sahifalar soni 720" << endl;
    int line = 720*50;
    cout << "Jami qatorlar soni: " << line<< endl;
    int symbol = 152*line;
    cout << "Jami belgilar soni: " << symbol << endl;
    int format = line + symbol;
    cout << "File hajmi: " << format / 1024 / 1024 << "MB" << endl;


    /*2.Akmal klaviaturada daqiqasiga N ta belgi yoza oladi. 5 ta belgi bitta so‘z deb hisoblansa Akmal 2.5 daqiqada nechta so‘z yoza oladi? N ga qiymat ekrandan kiritilsin.*/
    int N;
    cout << "Akmal daqiqasiga nechta belgi yozishi mumkin kiriting: ";
    cin >> N;
    int symbols = N *2.5;
    int words = symbols / 5;
    cout << "Akmal 2.5 daqiqa ichida   " << words << " ta so'z yozadi." << endl;

    return 0;
}