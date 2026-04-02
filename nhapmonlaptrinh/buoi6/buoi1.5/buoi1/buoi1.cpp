#include <iostream>
#include <vector>
#include <string>
#include < fstream>
using namespace std;

struct Person {
	int id, age;
	string name, hometown;
	friend istream& operator>>(istream& in, Person& p) {
		cout << "enter person information: " << endl;
		cout << "\t+ Id: ";
		in >> p.id;
		cout << "\t+ Name: ";
		in.ignore();
		getline(in, p.name);
		cout << "\t+ Age: ";
		in >> p.age;
		cout << "\t+ Home town: ";
		in.ignore();
		getline(in, p.hometown);
		return in;
	}
	friend ostream& operator<<(ostream& out, const Person& p) {
		out << "Person information: " << endl;
		out << "\t+ Id: " << p.id << endl;
		out << "\t+ Name: " << p.name << endl;
		out << "\t+ Age: " << p.age << endl;
		out << "\t+ Home town: " << p.hometown << endl;
		return out;

	}
};

void Show(vector<Person>p) {
	if (p.size() == 0)
		cout << "An empty list" << endl;
	else {
		for (int i = p.size() - 1; i >= 0; i--) {
			cout << "preson information: " << endl;
			cout << "\t + Id: " << p[i].id << endl;
			cout << "\t + name: " << p[i].name << endl;
			cout << "\t + age: " << p[i].age << endl;
			cout << "\t + Home town: " << p[i].hometown << endl;
		}
	}
}
bool Remove(vector<Person>& p, int id) {
	for (int i = 0; i < p.size(); i++) {
		if (p[i].id == id) {
			{
				p.erase(p.begin() + i);
				return true;
			}
		}
		return true;
	}
}
void Find(vector<Person> p, string name) {
	bool found = false;
	for (int i = p.size() - 1; i >= 0; i--) {
		if (p[i].name == name) {
			found = true;
			cout << p[i];
		}
	}
	if (!found)
		cout << "No person is found with name: " << name << endl;
}

static void Export(vector<Person> p, string filename) {
	ofstream out(filename);
	if (!out.is_open()) {
		cout << "can`t open file: " << filename << endl;
		return;
	}
	for (int i = 0; i < p.size(); i++) {
		out.write(reinterpret_cast<const char*>(&p[i].id), sizeof(p[i].id));

		size_t namelength = p[i].name.size();
		out.write(reinterpret_cast<const char*>(&namelength), sizeof(namelength));
		out.write(p[i].name.c_str(), namelength);

		out.write(reinterpret_cast<const char*>(&p[i].age), sizeof(p[i].age));

		size_t hometownlength = p[i].hometown.size();
		out.write(reinterpret_cast<const char*>(&hometownlength), sizeof(hometownlength));
		out.write(p[i].hometown.c_str(), hometownlength);
	}
	out.close();
	cout << "can`t open file: " << filename << endl;
} 
void Import(vector<Person>& p, string filename) {
	ifstream in(filename);
	if (!in.is_open()) {
		cout << "Can't open file: " << filename << endl;
		return;
	}

	p.clear();
	while (!in.eof()) {
		Person a;
		a.id = 0;
		in >> a.id;
		in.ignore();
		getline(in, a.name);
		in >> a.age;
		in.ignore();
		getline(in, a.hometown);
		if (a.id == 0)
			break;
		p.push_back(a);
	}

	in.close();
	cout << "Import successfully from file: " << filename << endl;
}
void main() {
	vector<Person>list;
	do {
		system("cls");
		cout << "---- HUMAN RESOURCE MANAGEMENT ----" << endl;
		cout << "1. Show person list" << endl;
		cout << "2. Add a person" << endl;
		cout << "3. Remove a person by id" << endl;
		cout << "4. Find people by name" << endl;
		cout << "5. Export to file" << endl;
		cout << "6. Import from file" << endl;
		cout << "quit " << endl;
		cout << "_______________________" << endl;
		cout << "your command: ";
		int cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			Show(list);
			break;
		}
		case 2: {
			Person a;
			cin >> a;
			list.push_back(a);
			break;
		}
		case 3: {
			int removeId;
			cout << "Enter ID to remove: ";
			cin >> removeId;
			bool res = Remove(list, removeId);
			if (res) {
				cout << "   Remove successful." << endl;
			}
			else {
				cout << "Id not found try again." << endl;
			}
			break;
		}
		case 4: {
			string name;
			cout << "Enter name to find : ";
			break;
		}
		case 5: {
			Export(list, "25TH2.dla");
			break;
		}
		case 6: {
			Import(list, "25TH2.dla");
			break;
		}
		case 0: {
			return;
		}
		default: {
			cout << "your command isn`t found, try again" << endl;
		}
		}
		cout << " press Enter to continue... ";
		cin.ignore();
		cin.get();
	} while (true);
}