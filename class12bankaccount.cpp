//Create a class BankAccount with members accountNumber, balance. Include functions for deposit() and withdraw().

#include <iostream>
using namespace std;

class BankAccount
{
    private:
    int accountNumber;
    float balance;

    public:
    void input() 
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() 
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }

    void withdraw()
     {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) 
        {
            cout << "Insufficient balance!" << endl;
        } else 
        {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }

    void show() 
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.input();
    acc.deposit();
    acc.withdraw();
    acc.show();
    return 0;
}
