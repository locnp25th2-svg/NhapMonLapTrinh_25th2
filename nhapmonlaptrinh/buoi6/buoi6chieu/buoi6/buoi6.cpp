

#include <iostream>
using namespace std;
void cau1() {
	int n, tong = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i ++ ){
			tong *= i;
			}
			cout << "tong tu 1 den: " << n << "la: " << tong << endl;
		}
void cau2() {
	int n, tich = 1, i = 1;
	cout << "nhap n: ";
	cin >> n;
	while (true) {
		if (i > n) {
			break;
		}
		tich *= i;
		i++;
	}
	cout << "tich tu 1 den: " << n << "la: " << tich << endl;
}
void cau3() {
	int x, n, tich = 1;
	cout << "nhap x , n: ";
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		tich *= x;
	}
	cout << "tich luy thua: " << "la: " << tich << endl;
}
void cau4(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}
void cau5() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			cout << "uoc so " << i << endl;
		}
	}
	void cau7();
	double luong;
	cout << " nhap luong nhan vien: ";
	cin >> luong;
	double thue;
	if (luong > 15000000)
	{
		thue = luong * 0.3;
	}
	else if (luong >= 7000000)
	{
		thue = luong * 0.2;
	}
	else {
		thue = luong * 0.1;
	}
	double luongrong = luong - thue;
	cout << "thue thu nhap: " << thue << "VND" << endl;
	cout << "luong rong: " << luongrong << "VND" << endl;

