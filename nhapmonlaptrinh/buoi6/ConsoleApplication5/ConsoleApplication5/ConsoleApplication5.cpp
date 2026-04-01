#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    cout << "nhap ngay :";
    cin >> ngay;
    cout << "nhap thang :";
    cin >> thang;
    cout << "nhap nam : ";
    cin >> nam;
    int soNgayTrongThang;
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
        thang == 8 || thang == 10 || thang == 12)
        soNgayTrongThang = 31;
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        soNgayTrongThang = 30;
    else {
        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
            soNgayTrongThang = 29;
        else
            soNgayTrongThang = 28;
    }

    ngay++;
    if (ngay > soNgayTrongThang) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }

    cout << "ngay" << ngay << "thang" << thang << "nam" << nam << endl;
} 