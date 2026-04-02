#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Author {
	int id;
	char* name = new char[30];
	char* nationality = new char[30];
	friend istream& operator>>(istream& is, Author& author) {
		cout << "Enter author information:" << endl;
		cout << "\t+ Enter author ID: ";
		is >> author.id;
		cout << "\t+ Enter author name: ";
		is.ignore();
		is.getline(author.name, 30);
		cout << "\t+ Enter author nationality: ";
		is.getline(author.nationality, 30);
		return is;
	}
};
struct Book {
	int id;
	char* name = new char[50];
	double price;
	Author author;
	friend ostream& operator<<(ostream& os, const Book& book) {
		os << "\t+ ID: " << book.id << endl;
		os << "\t+ Name: " << book.name << endl;
		os << "\t+ Price: " << book.price << endl;
		os << "\t+ Author Name: " << book.author.name << endl;
		return os;
	}
	friend istream& operator>>(istream& is, Book& book) {
		cout << "Enter book information:" << endl;
		cout << "\t+ Enter book ID: ";
		is >> book.id;
		cout << "\t+ Enter book name: ";
		is.ignore();
		is.getline(book.name, 50);
		cout << "\t+ Enter book price: ";
		is >> book.price;
		cin >> book.author;
		return is;
	}
};
void Show(const vector<Book>& books) {
	if (books.size() == 0) {
		cout << "No books available." << endl;
		return;
	}
	for (const auto& book : books) {
		cout << "Book information:" << endl;
		cout << book;
	}
}
int main()
{
	vector<Book> books;
	do {
		system("cls");
		cout << "------LIBRARY MANAGEMENT SYSTEM------" << endl;
		cout << "1. SHOW all books" << endl;
		cout << "2. ADD  a new book" << endl;
		cout << "3. UPDATE a book" << endl;
		cout << "4. DELETE a book by id" << endl;
		cout << "5. SEARCH for a book by name" << endl;
		cout << "6. EXPORT to file" << endl;
		cout << "7. IMPORT from file" << endl;
		cout << "0. EXIT" << endl;
		cout << "------------------------------------" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "SHOW all books" << endl;
			Show(books);
			break;
		}
		case 2: {
			cout << "ADD a new book" << endl;
			Book book;
			cin >> book;
			books.push_back(book);
			break;
		}
		case 3: {
			cout << "UPDATE a book" << endl;
			break;
		}
		case 4: {
			cout << "DELETE a book by id" << endl;
			break;
		}
		case 5: {
			cout << "SEARCH for a book by name" << endl;
			break;
		}
		case 6: {
			cout << "EXPORT to file" << endl;
			break;
		}
		case 7: {
			cout << "IMPORT from file" << endl;
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
		cout << "press any key to continue..." << endl;
	} while (true);
}