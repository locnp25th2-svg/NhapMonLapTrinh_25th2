#include <iostream>
#include "Account.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;
{
	LinkedList accounts;
	do {
		system("cls");
		cout << "------ACCOUNT MANAGEMENT SYSTEM------" << endl;
		cout << "1. Show all accounts" << endl;
		cout << "2. Add an account" << endl;
		cout << "3. Update a account" << endl;
		cout << "4. Delete a account" << endl;
		cout << "5. Search for a account" << endl;
		cout << "6. Export to file" << endl;
		cout << "7. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "-----------------------------------" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Show all accounts" << endl;
			accounts.Show();
			break;
		}
		case 2: {
			cout << "Add new account" << endl;
			Account a;
			cin >> a;
			accounts.AddTail(a);
			break;
		}
		case 3: {
			cout << "Update an account" << endl;
			int accountId;
			cout << "Enter account ID to update: ";
			cin >> accountId;
			bool res = accounts.Update(accountId);
			if (res)
				cout << "Updated account with Id: " << accountId << endl;
			else
				cout << "Account with ID " << accountId << " not found." << endl;
			break;
		}
		case 4: {
			cout << "Delete an account" << endl;
			int accountId;
			cout << "Enter account ID to delete: ";
			cin >> accountId;
			bool res = accounts.Delete(accountId);
			if (res)
			{
				cout << "Deleted account with Id: " << accountId << endl;
			}
			else {
				cout << "Account with ID " << accountId << " not found." << endl;
			}
			break;
		}
		case 5: {
			cout << "Search for an account" << endl;
			string searchTerm;
			cout << "Enter user name to search: ";
			cin.ignore();
			getline(cin, searchTerm);
			accounts.Find(searchTerm);
			break;
		}
		case 6: {
			cout << "Export to file" << endl;
			accounts.Export("25th2.dla");
			break;
		}
		case 7: {
			cout << "Import from file" << endl;
			accounts.Import("25th2.dla");
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