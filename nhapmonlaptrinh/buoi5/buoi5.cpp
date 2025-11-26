

#include <iostream>
#include <cmath>
using namespace std;
//void cau1() {
//    float a;
//    cout << "nhap diem: ";
//    cin >> a;
//    if (a >= 5) {
//        cout << "yeu" << endl;
//    }
//    else if (a >= 7){
//        cout << "trung binh" << endl;
//}
//    else if (a >= 8) {
//              cout << "kha" << endl;
//}
//    else{
//                cout << "gioi" << endl;
//     }
//        }
//void cau2() {
//    int thang;
//    cout << "nhap thang: ";
//    cin >> thang;
//     if (thang == 1 ){
//         cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//     else if (thang == 2) {
//         cout << "thang " << thang << " co 28 ngay" << endl;
//     }
//     else if (thang == 3) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else if (thang == 4) {
//         cout << "thang " << thang << " co 30 ngay" << endl;
//     }
//     else if (thang == 5) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else if (thang == 6) {
//         cout << "thang " << thang << " co 30 ngay" << endl;
//     }
//     else if (thang == 7) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else if (thang == 8) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else if (thang == 9) {
//         cout << "thang " << thang << " co 30 ngay" << endl;
//     }
//     else if (thang == 10) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else if (thang == 11) {
//         cout << "thang " << thang << " co 30 ngay" << endl;
//     }
//     else if (thang == 12) {
//         cout << "thang " << thang << " co 31 ngay" << endl;
//     }
//     else {
//         cout << "1 nam chi co 12 thang , vui long nhap lai :" << endl;
//     }
//    }
//void cau3() {
//    float a, b, c;
//    cout << "nhap 3 so a, b, c: ";
//    cin >> a >> b >> c;
//    if (a > b && a > c) {
//        cout << "so lon nhat la: " << a << endl;
//    }
//    else if (b > a && b > c) {
//        cout << "so lon nhat la: " << b << endl;
//    }
//    else {
//        cout << "so lon nhat la: " << c << endl;
//    }
//}
//void cau4() {
//    float a, c;
//    cout << " nhap 2 so a, b: ";
//    cin >> a >> c;
//    if (a > 0 && c > 0) {
//        cout << "hai so duong: " << endl;
//    }
//    else if (a < 0 && c < 0) {
//        cout << "hai so am: " << endl;
//    }
//    else if (a < 0 && c > 0) {
//        cout << "hai so khac dau: " << endl;
//    }
//    else if (a > 0 && c < 0) {
//        cout << "hai so khac dau: " << endl;
//    }
//}
//void cau5() {
//    float a, b;
//    cout << " Nhap 2 so a, b: ";
//    cin >> a >> b;
//    if (a == 0 && b != 0 ) {
//        cout << "phuong trinh vo nghiem" << endl;
//    }
//    else if ( a != 0 && b == 0) {
//        cout << "phuong trinh vo so nghiem: " << endl;
//    }
//    else
//        cout << "phuong trinh co mot nghiem: " << endl;
//}
//void cau6() {
//    int thang;
//    cout << "nhap thang: ";
//    cin >> thang;
//    if (thang < 4) {
//        cout << "quy 1: " << endl;
//    }
//    else if (thang < 7) {
//        cout << "quy 2: " << endl;
//    }
//    else if (thang < 10) {
//        cout << "quy 3: " << endl;
//    }
//    else {
//        cout << "quy 4: " << endl;
//    }
//}
//void cau7() {
//    float a, b, c;
//    cout << "nhap ba canh a, b, c: ";
//    cin >> a >> b >> c;
//    if (a + b > c || b + c > a || a + c > b) {
//        cout << "la mot tam giac: " << endl;
//    }
//    else if (a == b && b == c) {
//        cout << "la mot tam giac deu: " << endl;
//    }
//    else if ( a == b || b == c || a == c ) {
//        cout << "la mot tam giac can: " << endl;
//    }
//    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
//        cout << "la mot tam giac vuong: " << endl;
//    }
//}
//void cau8() {
//    float a, b, c;
//    cout << "nhap a, b, c: ";
//    cin >> a >> b >> c;
//    if (a == 0 && b == 0 && c == 0) {
//        cout << "phuong trinh vo so nghiem: " << endl;
//    }
//    else if (a == 0 && b == 0 && c != 0) {
//        cout << "phuong trinh vo nghiem: " << endl;
//    }
//    else if (a == 0 && b != 0) {
//        cout << "phuong trinh co nghiem: " << -c / b << endl;
//    }
//    else if (a != 0 && b != 0 && c != 0) {
//        cout << "phuong trinh co nghiem: " << b * b - 4*a*c << endl;
//    }
//        float d = b * b - 4 * a * c;
//        cout << "phuong trinh co nghiem: " << -b / (2 * a) << endl;
//        cin >> d;
//    if (d > 0) {
//        cout << "phuong trinh vo nghiem: " << endl;
//    }
//    else if (d == 0) {
//        cout << "phuong trinh co 1 nghiem: " << -b / 2 * a << endl;
//    }
//    else {
//        cout << "x1 =: " << -b - sqrt(d) / 2 * a << endl;
//        cout << "x2 =: " << -b + sqrt(d)/ 2 * a << endl;
//    }
//
//}
//void cau9() {
//    int thang, nam;
//    cout << "nhap thang: ";
//    cin >> thang;
//    cout << "nhap nam: ";
//    cin >> nam;
//    if (thang == 1) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 2) {
//        if (nam % 4 == 0 && nam % 100 != 0 || (nam % 400))
//        cout << "thang " << thang << " co 28 ngay" << endl;
//    }
//    else if (thang == 3) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 4) {
//        cout << "thang " << thang << " co 30 ngay" << endl;
//    }
//    else if (thang == 5) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 6) {
//        cout << "thang " << thang << " co 30 ngay" << endl;
//    }
//    else if (thang == 7) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 8) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 9) {
//        cout << "thang " << thang << " co 30 ngay" << endl;
//    }
//    else if (thang == 10) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else if (thang == 11) {
//        cout << "thang " << thang << " co 30 ngay" << endl;
//    }
//    else if (thang == 12) {
//        cout << "thang " << thang << " co 31 ngay" << endl;
//    }
//    else {
//        cout << "1 nam chi co 12 thang , vui long nhap lai :" << endl;
//    }
//}
//void cau10() {
//    int ngay, thang, nam;
//    cout << "nhap ngay, thang, nam: ";
//    cin >> ngay >> thang >> nam;
//    if (ngay == 31 && thang == 12) {
//        cout << "ngay tiep theo la 1/1" << nam + 1 << endl;
//    }
//    else {
//        int ngaycuoithang;
//        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
//            ngaycuoithang = 31;
//        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
//            ngaycuoithang = 30;
//        else {
//            if (nam % 4 == 0 && nam % 100 != 0 || ( nam % 400 = 0))
//                ngaycuoithang = 29;
//            else
//                ngaycuoithang = 28;
//        }
//        if (ngay < ngaycuoithang)
//            cout << "ngay tiep theo la: " << ngay + 1 << thang << "/" << nam << endl;
//        else
//            cout << "ngay tiep theo la: " << thang + 1 << "/" << nam << endl;
//    }
//}
        int main()
        {
            cout << "vong lap cua FOR: " << endl;
            for (int i = 10; i <= 10; i++) {
                cout << i << endl;
            }
            cout << "vong lap cua WHILE: " << endl;
            int j = 10;
            while (j <= 10) {
                cout << j << endl;
                j++;
            }
            cout << "vong lap cua DO ... WHILE: " << endl;
            int k = 10;
            do {
                cout << k << endl;
                k++;
            } while (k <=10);
        }

