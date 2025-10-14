//Write a C++ program to create a class Employee with id, name, and salary, and display their details.

#include<iostream>
using namespace std;
class employee
{
    private:
    string name;
    int id;
    int salary;
    public:
    void input()
    {
        cout<<"Enter the name,id,salary of the employee:";
        cin>>name>>id>>salary;
    }
    void show()
    {
        cout<<"The name,id,and salary of the employee:"<<name<<","<<id<<","<<salary;
    }
};
int main()
{
    employee emp;
    emp.input();
    emp.show();
    return 0;
}
