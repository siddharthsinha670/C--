//Create a structure Employee with id, name, and salary. Take input for 1 employee and display them.

#include<iostream>
using namespace std;
struct employee
{
    int id;
    char *name;
    int salary;
};
int main()
{
       struct employee e;
      cout<<"Enter the name of the employee: ";
      cin>>e.name;
      cout<<"Enter the id of the employee: ";
      cin>>e.id;
      cout<<"Enter the salary of the employee: ";
      cin>>e.salary;
      cout<<"name of the employee="<<e.name;
      cout<<endl<<"id of the employee="<<e.id;
      cout<<endl<<"salary of the employee="<<e.salary;
      return 0;
}
