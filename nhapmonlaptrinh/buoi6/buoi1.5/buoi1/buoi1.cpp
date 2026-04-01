#include <iostream>
#include <vector>
using namespace std;

struct Person {
    int id, age;
    string name, hometown;
};

void Show(vector<Person>p) {
    if (p.size() == 0)
        cout << "An empty list" << endl;
    else {
        for (int i = p.size() - 1; i >= 0; i--) {
            cout << "\t + Id: " << p[i].id << endl;
            cout << "\t + name: " << p[i].name << endl;
            cout << "\t + age: " << p[i].age << endl;
            cout << "\t + Home town: " << p[i].hometown << endl;
        }
    }
}
void main() {
    do {
        cout << "---- HUMAN RESOURCE MANAGEMENT ----" << endl;
        cout << "1. Show person list" << endl;
        cout << "2. Add a person" << endl;
        cout << "3. Remove a person by id" << endl;
        cout << "4. Find people by name" << endl;
        cout << "5. Export to file" << endl;
        cout << "6. Import from file" << endl;
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
            cout << "Id: ";
            cin >> a.id;
            cout << "Name: ";
            cin >> a.name;
            cout << "Age: ";
            cin >> a.age;
            cout << "Home town: ";
            cin >> a.hometown;
            
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 6: {
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