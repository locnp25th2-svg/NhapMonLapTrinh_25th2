

#include <iostream>
#include <cmath>
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
void cau2() {
    int thang;
    cout << "nhap thang: ";
    cin >> thang;
     if (thang == 1 ){
         cout << "thang " << thang << " co 31 ngay" << endl;
    }
     else if (thang == 2) {
         cout << "thang " << thang << " co 28 ngay" << endl;
     }
     else if (thang == 3) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else if (thang == 4) {
         cout << "thang " << thang << " co 30 ngay" << endl;
     }
     else if (thang == 5) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else if (thang == 6) {
         cout << "thang " << thang << " co 30 ngay" << endl;
     }
     else if (thang == 7) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else if (thang == 8) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else if (thang == 9) {
         cout << "thang " << thang << " co 30 ngay" << endl;
     }
     else if (thang == 10) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else if (thang == 11) {
         cout << "thang " << thang << " co 30 ngay" << endl;
     }
     else if (thang == 12) {
         cout << "thang " << thang << " co 31 ngay" << endl;
     }
     else {
         cout << "1 nam chi co 12 thang , vui long nhap lai :" << endl;
     }
    }
void cau3() {
    float a, b, c;
    cout << "nhap 3 so a, b, c: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "so lon nhat la: " << a << endl;
    }
    else if (b > a && b > c) {
        cout << "so lon nhat la: " << b << endl;
    }
    else {
        cout << "so lon nhat la: " << c << endl;
    }
}
void cau4() {
    float a, c;
    cout << " nhap 2 so a, b: ";
    cin >> a >> c;
    if (a > 0 && c > 0) {
        cout << "hai so duong: " << endl;
    }
    else if (a < 0 && c < 0) {
        cout << "hai so am: " << endl;
    }
    else if (a < 0 && c > 0) {
        cout << "hai so khac dau: " << endl;
    }
    else if (a > 0 && c < 0) {
        cout << "hai so khac dau: " << endl;
    }
}
void cau5() {
    float a, b;
    cout << " Nhap 2 so a, b: ";
    cin >> a >> b;
    if (a == 0 && b != 0 ) {
        cout << "phuong trinh vo nghiem" << endl;
    }
    else if ( a != 0 && b == 0) {
        cout << "phuong trinh vo so nghiem: " << endl;
    }
    else
        cout << "phuong trinh co mot nghiem: " << endl;
}
void cau6() {
    int thang;
    cout << "nhap thang: ";
    cin >> thang;
    if (thang < 4) {
        cout << "quy 1: " << endl;
    }
    else if (thang < 7) {
        cout << "quy 2: " << endl;
    }
    else if (thang < 10) {
        cout << "quy 3: " << endl;
    }
    else {
        cout << "quy 4: " << endl;
    }
}
void cau7() {
    float a, b, c;
    cout << "nhap ba canh a, b, c: ";
    cin >> a >> b >> c;
    if (a + b > c || b + c > a || a + c > b) {
        cout << "la mot tam giac: " << endl;
    }
    else if (a == b && b == c) {
        cout << "la mot tam giac deu: " << endl;
    }
    else if ( a == b || b == c || a == c ) {
        cout << "la mot tam giac can: " << endl;
    }
    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        cout << "la mot tam giac vuong: " << endl;
    }
}
int main() {
   cau7();
}
