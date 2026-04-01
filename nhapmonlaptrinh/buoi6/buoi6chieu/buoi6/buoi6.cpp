

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
}
void cau6() {
	int n, tong = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += 1;
		}
	}
	cout << "nhap tong uoc cac so cua " << n << "la: " << tong << endl;
}
void cau7() {
	int n, tong = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += 1;
		}
	}
	if (n == tong)
		cout << n << " la so hoan thien: " << endl;
	else
	cout << "khong phai la so hoan thien " << n << " la: " << tong << endl;
}
void cau8() {
	int n, dem = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if ( n % i == 0) {
			dem++;
		}
	}
	if (dem == 2)
		cout << n << "la so nguyen to" << endl;
	else
		cout << n << "khong phai la so nguyen to " << endl;
}
void cau9() {
	int n, dem = 0;
	cout << "nhap n ";
	cin >> n;
	cout << n;
	while (n > 0) {
		dem++;
		n /= 10;
	}
	cout << "co" << dem << " chu so " <<  endl;

}
void cau10() {
	int a, b;
	cout << " nhap a, b: ";
	cin >> a >> b;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	cout << "UCLN: " << a << endl;
}
void cau11() {
	int sotien;
	bool timthay = false;
	cout << "nhap so tien: ";
	cin >> sotien;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i * 100000 + j * 200000 + k * 500000 == sotien) {
					cout << i << "x100000 + " << j << "x200000 + " << "x500000 +" << endl;
				}
			}
		}
	}
	if (timthay == false)
		cout << "khong tim thay phuong an phu hop: " << endl;
}
void cau12() {
	for (int ga = 0; ga <= 36; ga++) {
		int cho = 36 - ga;
		if (2 * ga + 4 * cho == 100) {
			cout << " so ga: " << ga << "so cho: " << cho << endl;
		}
	}
}
void cau13() {
	bool isLeapYear(int year) {
		if (year % 400 == 0) return true;
		if (year % 100 == 0) return false;
		if (year % 4 == 0) return true;
		return false;

		} 
		
	int main() {
		int day, month, year;
		cout << "Nhap ngay: ";
		cin >> day;
		cout << "Nhap thang: ";
		cin >> month;
		cout << "Nhap nam: ";
		cin >> year;
		int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (isLeapYear(year)) {
			daysInMonth[2] = 29;
		}
		day++;
		if (day > daysInMonth[month]) {
			day = 1;
			month++;
			
			if (month > 12) {
				month = 1;
				year++;
			}
		}
		cout << "Ngay ke tiep la: "
			<< day << "/" << month << "/" << year << endl;
		return 0;
	}
}
int main() {
cau13();
}