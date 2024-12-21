//
// Created by MrAbdukarim on 9/16/2024.
//

#include <iostream>

using namespace std;

int main() {
    /* 1. int type da soat berilgan. uni sekundga o'tgazib ekranga chiqaruvchi dastur tuzing. */
    cout << "1.Kiritilgan soatni sekundga o'tkazib beruvchi dastur." << endl;

    int hour;
    cout << "Soatni kiriting: ";
    cin >> hour;
    int sec = hour*3600;
    cout <<"Natijasi: " << sec << "sekund" << endl;

    /* 2. int type da kun berilgan. uni minutga o'tgazib ekranga chiqaruvchi dastur tuzing. */
    cout << "2.Kiritilgan kunni minutga o'tkazib beruvchi dastur." << endl;

    int day;
    cout << "Kunni kiriting: ";
    cin >> day;
    int mnt = day*24*60;
    cout <<"Natijasi: " << mnt << "minut" << endl;

    /* 3. int type da minut berilgan. uni soatga o'tgazib ekranga chiqaruvchi dastur tuzing. */
    cout << "3.Kiritilgan minutni soatga o'tkazib beruvchi dastur." << endl;

    int mnt1;
    cout << "minutni kiriting: ";
    cin >> mnt1;
    int hour2 = mnt1/60;
    cout <<"Natijasi: " << hour2 << "soat" << endl;

    /* 4. int type da minut berilgan. uni kunga o'tgazib ekranga chiqaruvchi dastur tuzing. */
    cout << "4.Kiritilgan minutni kunga o'tkazib beruvchi dastur." << endl;

    int mnt2;
    cout << "minutni kiriting: ";
    cin >> mnt2;
    int Day = mnt2/60/24;
    cout <<"Natijasi: " << Day << "kun" << endl;

   return 0;
}