//Write a program to create a class Student with data members name and age, initialized using a constructor.

#include<iostream>
using namespace std;
class student
{
    private:
    int age;
    string name;
    public:
    student()
    {
        name=rahul;
        age=18;
    }
    student(int age1,string name1)
    {
        age=age1;
        name=name1;
    }
    student(student &x)
    {
        age=x.age;
        student=x.student;
    }
    void input()
    {
        cout<<"Ente the name and age of the student:";
    }
    void show()
    {
        cout<<"The name and age of the studnet is given here: "<<name<<"--"<<age;
    }
};
int main()
{
    student stu1;
    stu1.show();
    student stu2(siddharth,21);
    stu2.show()
    return 0;
}
