#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

struct BankAccount {
	int id;
	char name[50];
	double balance;
	char bankName[50];
	bool isActive;
	friend istream& operator>>(istream& is, BankAccount& a) {
		cout << "Enter account information:" << endl;
		cout << "\t+ Enter account ID: ";
		is >> a.id;
		cout << "\t+ Enter name: ";
		is.ignore();
		is.getline(a.name, 50);
		cout << "\t+ Enter balance: ";
		is >> a.balance;
		is.ignore();
		cout << "\t+ Enter bank name: ";
		is.getline(a.bankName, 50);
		cout << "\t+ Enter status (1 - Active; 0 - Lock): ";
		int temp;
		is >> temp;
		a.isActive = temp == 1 ? true : false;
		return is;
	}
	friend ostream& operator<<(ostream& os, const BankAccount& a) {
		os << "\t+ ID: " << a.id << endl;
		os << "\t+ Name: " << a.name << endl;
		os << "\t+ Balance: " << a.balance << endl;
		os << "\t+ bankName: " << a.bankName << endl;
		os << "\t+ isActive: " << a.isActive << endl;
		return os;
	}
};
#endif