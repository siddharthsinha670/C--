//Write a program to create a class Student with data members name and age. Take input and display the details.

#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    public:
    void input()
    {
        cout<<"Enter the name of student and age:";
        cin>>name>>age;
    }
    void show()
    {
        cout<<"the name and age of the student is: "<<name<<","<<age;
    }
};
int main()
{
    student stu;
    stu.input();
    stu.show();
    return 0;
}