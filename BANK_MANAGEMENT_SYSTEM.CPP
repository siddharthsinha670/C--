//BANK MANAGEMNT SYSTEM

#include<iostream>
using namespace std;

//base class
class Account
{
    protected:
    string name;
    int accountNumber;
    double balance;

    public:
    //constructor:
    Account(string n,int accNO,double bal)
    {
        name=n;
        accountNumber=accNO;
        balance=bal;
    }
    //function to diaplay account details
    void display()
    {
        cout<<"\nAccount holder:"<< name << endl;
        cout<<" \nAccount Number:"<< accountNumber << endl;
        cout << " Balance :" << balance << endl ;
    }
    // deposite  function
    void deposit(double amount)
   {
     balance += amount;
     cout << "Deposited: " << amount << endl;
   }
   //Withdrawn function
   void withdraw(double amount)
   {
    if(amount > balance)
    {
        cout << "Insufficient balance! " << endl;
    }
    else
    {
        balance-= amount;
        cout << " withdrawn:" << amount << endl;
    }
   }
};

//-----Derived Class-------
class SavingAccount : public Account 
{
    private:
    double interestRate;

    public:
    //constructor using base class constructor
    SavingAccount (string n, int accNo, double bal, double rate): Account(n, accNo, bal)
    {
        interestRate = rate;
    }
    
    //Funncction Overriding(polymorphism)
    void display()
    {
        Account :: display();
        cout<< "Intrest Rate: "<< interestRate << "%" << endl;
    }
    //Calculate inntrest

    void addinterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest ;       
         cout<< "Interest Added "<< interest << endl; 
    }
};

//-------------------Main Function----------------
int main()
{
    //creating object
SavingAccount acc1("Rahul", 12345, 10000, 5);

acc1.display();

acc1.deposit(500);
acc1.withdraw(300);

acc1.addinterest();

acc1.display();

return 0;
}