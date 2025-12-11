// Define the employee class and calculate the gross salary
#include <iostream>
#include <cstring>
using namespace std;

class emp
{
    int id;
    char name[30];
    char post[20];
    char dept[30];
    float sal;
    char add[50];

public:

    // Default constructor
    emp()
    {
        id = 0;
        strcpy(name, "");
        strcpy(post, "");
        strcpy(dept, "");
        sal = 0.0;
        strcpy(add, "");
    }

    // Constructor with id
    emp(int idno)
    {
        id = idno;
        strcpy(name, "");
        strcpy(post, "");
        strcpy(dept, "");
        sal = 0.0;
        strcpy(add, "");
    }

    // Constructor with id + name
    emp(int idno, char nam[])
    {
        id = idno;
        strcpy(name, nam);
        strcpy(post, "");
        strcpy(dept, "");
        sal = 0.0;
        strcpy(add, "");
    }

    // Constructor with id + name + post
    emp(int idno, char nam[], char pst[])
    {
        id = idno;
        strcpy(name, nam);
        strcpy(post, pst);
        strcpy(dept, "");
        sal = 0.0;
        strcpy(add, "");
    }

    // Constructor with id + name + post + dept
    emp(int idno, char nam[], char pst[], char dpt[])
    {
        id = idno;
        strcpy(name, nam);
        strcpy(post, pst);
        strcpy(dept, dpt);
        sal = 0.0;
        strcpy(add, "");
    }

    // Constructor with id + name + post + dept + salary
    emp(int idno, char nam[], char pst[], char dpt[], float sl)
    {
        id = idno;
        strcpy(name, nam);
        strcpy(post, pst);
        strcpy(dept, dpt);
        sal = sl;
        strcpy(add, "");
    }

    // Constructor with all details
    emp(int idno, char nam[], char pst[], char dpt[], float sl, char adr[])
    {
        id = idno;
        strcpy(name, nam);
        strcpy(post, pst);
        strcpy(dept, dpt);
        sal = sl;
        strcpy(add, adr);
    }

    // Copy constructor
    emp(emp &x)
    {
        id = x.id;
        strcpy(name, x.name);
        strcpy(post, x.post);
        strcpy(dept, x.dept);
        sal = x.sal;
        strcpy(add, x.add);
    }

    // Input function
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        cin.getline(name, 30);

        cout << "Enter Post: ";
        cin.getline(post, 20);

        cout << "Enter Department: ";
        cin.getline(dept, 30);

        cout << "Enter Salary: ";
        cin >> sal;
        cin.ignore();

        cout << "Enter Address: ";
        cin.getline(add, 50);
    }

    // Display function
    void show()
    {
        cout << "\n--- Employee Data ---";
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nPost: " << post;
        cout << "\nDepartment: " << dept;
        cout << "\nBasic Salary: " << sal;
        cout << "\nAddress: " << add << endl;
    }

    // Calculate gross salary
    void calculate()
    {
        float gs = sal + (0.20 * sal) + (0.40 * sal) + (0.30 * sal);
        cout << "Gross Salary = " << gs << endl;
    }
};

int main()
{
    emp e1;
    e1.input();
    e1.show();
    e1.calculate();

    emp e2(101);
    e2.show();
    e2.calculate();

    emp e3(101, (char*)"Ram");
    e3.show();
    e3.calculate();

    emp e4(101, (char*)"Ram", (char*)"Clerk");
    e4.show();
    e4.calculate();

    emp e5(101, (char*)"Ram", (char*)"Clerk", (char*)"Sales");
    e5.show();
    e5.calculate();

    emp e6(101, (char*)"Ram", (char*)"Clerk", (char*)"Sales", 50000);
    e6.show();
    e6.calculate();

    emp e7(101, (char*)"Ram", (char*)"Clerk", (char*)"Sales", 50000, (char*)"Patna");
    e7.show();
    e7.calculate();

    return 0;
}
