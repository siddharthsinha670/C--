#include<iostream>
#include<vector>
using namespace std;

//base Abstract class(Abstraction)
//Is class ka objects banega
class User
{
    protected:
    int id;
    string  name;

    public:
    //constructor
    User(int id,string name)
    {
        this->id=  id;
        this->name=name;
    }
    //Pure virtual Function(must override)
    virtual void displayRole()=0;

    //common function
    void showDetails()
    {
        cout<<"ID"<<id<<", Name:"<<name<<  endl;
    }
    //Virtual destructor(important in inheritance)
    virtual ~User()
    {

    }
};
//Derived class (inheritance)
class Employee: public User{
    protected:
    double salary;

    public:
    Employee(int id,string name,double salary): User(id ,name)
    {
        this-> Salary = salary;
    }

};