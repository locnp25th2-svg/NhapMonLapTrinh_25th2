
// buoi5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void cau1() {
    float a;
    cout << "nhap diem: ";
    cin >> a;
    if (a >= 5) {
        cout << "yeu" << endl;
    }
    else if (a >= 7){
        cout << "trung binh" << endl;
}
    else if (a >= 8) {
              cout << "kha" << endl;
}
    else{
                cout << "gioi" << endl;
     }

        }
int main() {
   cau1();
}
