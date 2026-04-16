#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SingleLinkedList.h"

using namespace std;

int main()
{
	SingleLinkedList accounts;

	do {
		system("cls");
		cout << "------BANK ACCOUNT MANAGEMENT SYSTEM------" << endl;
		cout << "1. Show all accounts" << endl;
		cout << "2. Add an account" << endl;
		cout << "3. Deposit to an account" << endl;
		cout << "4. Withdraw from an account" << endl;
		cout << "5. Transfer from/to an account" << endl;
		cout << "6. Search for an account" << endl;
		cout << "7. Lock/Activate an account" << endl;
		cout << "8. Export to file" << endl;
		cout << "9. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "1. SHOW ALL ACCOUNTS" << endl;
			accounts.Show();
			break;
		}
		case 2: {
			cout << "2. ADD AN ACCOUNT" << endl;
			BankAccount a;
			cin >> a;
			accounts.AddTail(a);
			break;
		}
		case 3: {
			cout << "3. DEPOSIT TO AN ACCOUNT" << endl;
			double money;
			cout << "Enter money: ";
			cin >> money;
			cout << "Enter bank account id: ";
			int searchId;
			cin >> searchId;
			accounts.Balance(searchId, money);
			break;
		}
		case 4: {
			cout << "4. WITHDRAW FROM AN ACCOUNT" << endl;
			double money;
			cout << "Enter money: ";
			cin >> money;
			money *= -1;
			cout << "Enter bank account id: ";
			int searchId;
			cin >> searchId;
			accounts.Balance(searchId, money);
			break;
		}
		case 5: {
			cout << "5. TRANSFER FROM/TO AN ACCOUNT" << endl;
			double money;
			cout << "Enter money: ";
			cin >> money;
			cout << "Enter master account id: ";
			int masterId;
			cin >> masterId;
			cout << "Enter slave account id: ";
			int slaveId;
			cin >> slaveId;
			//accounts.Transfer(masterId, slaveId, money);
			break;
		}
		case 6: {
			cout << "SEARCH FOR AN ACCOUNT" << endl;
			string searchTerm;
			cout << "Enter account name or bank name: ";
			getline(cin, searchTerm);
			//accounts.Search(searchTerm);
			break;
		}
		case 7: {
			cout << "7. LOCK/ACTIVATE AN ACCOUNT" << endl;
			cout << "Enter account Id: ";
			int searchId;
			cin >> searchId;
			//accounts.ChangeStatus(searchId);
			break;
		}
		case 8: {
			cout << "8. EXPORT TO FILE" << endl;
			//accounts.Export("25th2.dla");
			break;
		}
		case 9: {
			cout << "9. IMPORT FROM FILE" << endl;
			//accounts.Import("25th2.dla");
			break;
		}
		case 0: {
			return 0;
		}
		default: {
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
		}
		system("pause");
		cout << "Press any key to continue..." << endl;
	} while (true);
}