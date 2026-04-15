#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Account.h"
#include <fstream>
#include <iostream>

struct Node {
	Account data;
	Node* next = NULL;
};
struct LinkedList {
	Node* head = NULL;
	void Show();
	void AddFirst(Account a);
	void AddTail(Account a);
	bool Update(int accountId);
	bool Delete(int accountId);
	void Find(string keyword);
	void Export(string filename);
	void Import(string filename);
};

void LinkedList::Show() {
	if (head == NULL) {
		cout << "No accounts to show." << endl;
		return;
	}
	Node* item = head;
	while (item != NULL) {
		cout << item->data;
		item = item->next;
	}
}
void LinkedList::AddFirst(Account a) {
	Node* newNode = new Node;
	newNode->data = a;
	newNode->next = head;
	head = newNode;
	cout << "Added account with ID: " << a.id << endl;
}
void LinkedList::AddTail(Account a) {
	Node* newNode = new Node;
	newNode->data = a;
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* item = head;
		while (item->next != NULL) {
			item = item->next;
		}
		item->next = newNode;
	}
	cout << "Added account with ID: " << a.id << endl;
}
bool LinkedList::Update(int accountId) {
	Node* item = head;
	while (item != NULL) {
		if (item->data.id == accountId) {
			cout << "Updating account with ID: " << accountId << endl;
			cin >> item->data;
			return true;
		}
		item = item->next;
	}
	return false;
}
bool LinkedList::Delete(int accountId) {
	if (head == NULL) {
		return false;
	}
	if (head->data.id == accountId) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return true;
	}
	Node* item = head;
	while (item->next != NULL) {
		if (item->next->data.id == accountId) {
			Node* temp = item->next;
			item->next = item->next->next;
			delete temp;
			return true;
		}
		item = item->next;
	}
	return false;
}
void LinkedList::Find(string keyword) {
	Node* item = head;
	while (item != NULL) {
		if (item->data.user.find(keyword) != string::npos) {
			cout << item->data;
		}
		item = item->next;
	}
}
void LinkedList::Export(string filename) {
	ofstream outFile(filename, ios::binary);
	if (!outFile) {
		cout << "Error opening file for writing: " << filename << endl;
		return;
	}
	Node* item = head;
	while (item != NULL) {
		outFile.write(reinterpret_cast<const char*>(&item->data.id), sizeof(item->data.id));

		size_t linklength = item->data.link.size();
		outFile.write(reinterpret_cast<const char*>(&linklength), sizeof(linklength));
		outFile.write(item->data.link.c_str(), linklength);

		size_t userlength = item->data.user.size();
		outFile.write(reinterpret_cast<const char*>(&userlength), sizeof(userlength));
		outFile.write(item->data.user.c_str(), userlength);

		size_t passwordlength = item->data.password.size();
		outFile.write(reinterpret_cast<const char*>(&passwordlength), sizeof(passwordlength));
		outFile.write(item->data.password.c_str(), passwordlength);

		size_t descriptionlength = item->data.description.size();
		outFile.write(reinterpret_cast<const char*>(&descriptionlength), sizeof(descriptionlength));
		outFile.write(item->data.description.c_str(), descriptionlength);

		item = item->next;
	}
	outFile.close();
	cout << "Exported accounts to file: " << filename << endl;
}
void LinkedList::Import(string filename) {
	ifstream inFile(filename, ios::binary);
	if (!inFile) {
		cout << "Error opening file for reading: " << filename << endl;
		return;
	}
	Node* item = head;
	while (item != NULL) {
		Node* temp = item;
		item = item->next;
		delete temp;
	}
	while (inFile.peek() != EOF) {
		Account a;
		inFile.read(reinterpret_cast<char*>(&a.id), sizeof(a.id));

		size_t linklength;
		inFile.read(reinterpret_cast<char*>(&linklength), sizeof(linklength));
		a.link.resize(linklength);
		inFile.read(&a.link[0], linklength);

		size_t userlength;
		inFile.read(reinterpret_cast<char*>(&userlength), sizeof(userlength));
		a.user.resize(userlength);
		inFile.read(&a.user[0], userlength);

		size_t passwordlength;
		inFile.read(reinterpret_cast<char*>(&passwordlength), sizeof(passwordlength));
		a.password.resize(passwordlength);
		inFile.read(&a.password[0], passwordlength);

		size_t descriptionlength;
		inFile.read(reinterpret_cast<char*>(&descriptionlength), sizeof(descriptionlength));
		a.description.resize(descriptionlength);
		inFile.read(&a.description[0], descriptionlength);

		AddFirst(a);
	}
	inFile.close();
	cout << "Imported accounts from file: " << filename << endl;
}
#endif