#include <iostream>
using namespace std;
//int tinhTong(int a, int b) {
//    return a + b;
//}
//    double tinhTrungBinh(int a, int b) {
//        return (a + b) / 2.0;
//    }
//    int main() {
//        int a, b;
//        cout << "Nhap so a: ";
//        cin >> a;
//        cout << "Nhap so b: ";
//        cin >> b;
//        int tong = tinhTong(a, b);
//        cout << "Tong cua " << a << " va " << b << " la: " << tong << endl;
//        double trungBinh = tinhTrungBinh(a, b);
//        cout << "Trung binh cong cua " << a << " va " << b << " la: " << trungBinh << endl;
//
//        return 0;
//    }
bool kiemTraSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (kiemTraSoNguyenTo(n)) {
        cout << n << " la so nguyen to." << endl;
    }
    else {
        cout << n << " khong phai la so nguyen to." << endl;
    }

    return 0;
}