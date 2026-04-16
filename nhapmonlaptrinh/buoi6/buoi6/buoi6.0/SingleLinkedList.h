#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include "BankAccount.h"
#include <iostream>
using namespace std;

struct Node {
	BankAccount data;
	Node* next = NULL;
};
struct SingleLinkedList {
	Node* head = NULL;
	void Show();
	void AddTail(BankAccount a);
	void Balance(int id, double money);
};
void SingleLinkedList::Balance(int id, double money) {
	if (!head) { cout << "No accounts." << endl; return; }
	Node* temp = head;
	while (temp) {
		if (temp->data.id == id) {
			temp->data.balance += money;
		}
		temp = temp->next;
	}

}
void SingleLinkedList::Show() {
	if (!head) { cout << "No accounts." << endl; return; }
	Node* temp = head;
	while (temp) {
		cout << temp->data;
		temp = temp->next;
	}

}

void SingleLinkedList::AddTail(BankAccount a) {
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
#endif