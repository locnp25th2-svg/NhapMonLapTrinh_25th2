#include <iostream>
using namespace std;
void nhap(int arr[], int& n) {
	cout << "nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		cout << " nhap phan tu thu " << i + 1 << "; ";
		cin >> arr[i];
	}
}
void xuat(int arr[], int n) {
	cout << "cac phan tu trong mang la: " << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << "\t+ phan tu " << i + 1 << " : " << arr[i] << endl;
		}
	}
}
void vitriam(int arr[], int n) {
	cout << "cac vi tri am trong mang la: " << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0 ) {
			cout << "\t+ phan tu " << i + 1 << endl;
		}
	}
}
void giatrilonnhat(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "gia tri lon nhat trong mang la: " << max << endl;
}
void vitrinhonhat(int arr[], int n) {
	int min = arr[0];
	int index = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			index = i;
		}
	}
	cout << "vi tri nho nhat trong mang la: " << index + 1 << endl
} 
bool nguyento(int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2) {
		return true;
	} else {
		return false;
	}
}
int tongiatriam(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {

		}
	}
	return tong;
}
