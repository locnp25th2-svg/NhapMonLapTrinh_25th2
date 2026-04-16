#include <iostream>
#include "BankAccount.h"
#include "SingleLinkedList.h"
using namespace std;
int main()
{
    do {
        system("cls");
        cout << "------BANK ACCOUNT MANAGEMENT SYSTEM------" << endl;
        cout << "1. Show all accounts" << endl;
        cout << "2. Add an account" << endl;
        cout << "3. Deposit to an account" << endl;
        cout << "4. Withdraw from an account" << endl;
        cout << "5. Transfer from/to an account" << endl;
        cout << "6. Search for a account" << endl;
        cout << "7. Lock/Activate an account" << endl;
        cout << "3. Update a account" << endl;
        cout << "4. Delete a account" << endl;
        cout << "5. Search for a account" << endl;
        cout << "6. Export to file" << endl;
        cout << "7. Import from file" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Enter your choice: ";
    }