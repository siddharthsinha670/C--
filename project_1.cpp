//login and signup page

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Temp
{
    string userName, email, password;
    string searchname, searchpass, searchemail;
    fstream file;

public:
    void login();
    void signup();
    void forget();
} obj;

int main()
{
    char choice;
    cout << "\n1- Login";
    cout << "\n2- Signup";
    cout << "\n3- Forget Password";
    cout << "\n4- Exit";
    cout << "\nEnter your choice:: ";
    cin >> choice;
    cin.ignore(); // <<< important for getline()

    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signup();
        break;
    case '3':
        obj.forget();
        break;
    case '4':
        return 0;
    default:
        cout << "Invalid choice!";
    }
}

void Temp::signup()
{
    cout << "\nEnter your user name :: ";
    getline(cin, userName);
    cout << "Enter your email address :: ";
    getline(cin, email);
    cout << "Enter your password :: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    file << userName << "+" << email << "+" << password << endl;
    file.close();

    cout << "\nSignup successful!\n";
}

void Temp::login()
{
    cout << ".........Login................" << endl;
    cout << "Enter your user name :: ";
    getline(cin, searchname);
    cout << "Enter your password :: ";
    getline(cin, searchpass);

    file.open("loginData.txt", ios::in);
    if (!file)
    {
        cout << "No data found.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(file, line))
    {
        stringstream ss(line);
        getline(ss, userName, '+');
        getline(ss, email, '+');
        getline(ss, password);

        if (userName == searchname && password == searchpass)
        {
            cout << "\nAccount login successful...!";
            cout << "\nUsername :: " << userName;
            cout << "\nEmail :: " << email << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Invalid username or password.\n";
    file.close();
}

void Temp::forget()
{
    cout << "\nEnter your username :: ";
    getline(cin, searchname);
    cout << "Enter your Email address :: ";
    getline(cin, searchemail);

    file.open("loginData.txt", ios::in);
    if (!file)
    {
        cout << "No data found.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(file, line))
    {
        stringstream ss(line);
        getline(ss, userName, '+');
        getline(ss, email, '+');
        getline(ss, password);

        if (userName == searchname && email == searchemail)
        {
            cout << "\nAccount Found....!";
            cout << "\nYour Password :: " << password << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "\nAccount Not Found.....!\n";
    file.close();
}
