#include <string> 
#include <iostream>
#include "Account.h"
#include "LinkedList.h"
using namespace std;

int main()
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
        cout << "-------------------------------------" << endl;

        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Show all books" << endl;
            Account Show();
            break;
        }
        case 2: {
            cout << "Add new account" << endl;
            //Book book;
            //cin >> book;
            //books.push_back(book);
            break;
        }

        case 3: {
            cout << "Update an account" << endl;
            int accountId;
            cout << "Enter account ID to update: ";
            cin >> accountId;
            //Update(books, bookId);
            break;
        }

        case 4: {
            cout << "Delete an account" << endl;
            int accountId;
            cout << "Enter account ID to delete: ";
            cin >> accountId;
            bool res = false; // Delete(books, bookId);
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
        }
        case 6: {
            cout << " export to file" << endl;
            break;
        }

        case 7: {
            cout << " import from file" << endl;
            break;
        }

        case 0: {
            return 0;
        }

        default: {
            cout << " invalid choice, please try again" << endl;
            break;
        }
        }

        system("pause");
        cout << " press any key to continue..." << endl;      
    } while (true);
}

