#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    int salary;
};

int main() {
    Employee e[5];  // array of 5 employees

    // Input for 5 employees
    for (int i = 0; i < 5; i++) {
        cout << "Enter details of employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> e[i].name;
        cout << "ID: ";
        cin >> e[i].id;
        cout << "Salary: ";
        cin >> e[i].salary;
        cout << endl;
    }

    // Display all employees
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: " << e[i].name << endl;
        cout << "ID: " << e[i].id << endl;
        cout << "Salary: " << e[i].salary << endl;
        cout << "------------------------\n";
    }

    return 0;
}
