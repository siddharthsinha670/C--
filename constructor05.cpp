//Write a program to create a class Student with data members name and age, initialized using a constructor.

#include<iostream>
using namespace std;
class student
{
    private:
    int age;
    string name;
    public:
    student()//default constructor
    {
        name="siddharth";
        age=21;
    }
    student(string n,int a)//parameterized constructor
    {
        name=n;
        age=a;
    }
    student(student &x) //copy consturctor
    {
        age=x.age;
    }
    void input()
    {
        cout<<"Enter the name of the student and age of the student :";
        cin>>age>>name;
    }
    void show()
    {
        cout<<endl<<"The name and age of the student is:"<< name<<"-->"<<age;
    }
};
int main()
{
    student stu1; //default consturctor
    stu1.show();
    student stu2("rahul",31);  //parameter constructor
    stu2.show(); 
    student stu3("sona", 13);
    stu3.show();
    student stu4(stu3);
    stu4.show();
    return 0;
}