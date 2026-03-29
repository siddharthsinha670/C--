#include<iostream>
using namespace std;

//base class Abastraction
class person
{
    protected:
    string name;
    int age;
    public:
    //constructor
    person(string n,int a)
    {
        name=n;
        age=a;
    }
    //virtual funcction(polymorphism ke liye)
    virtual void display()
    {
        cout<<"Name:"<< name <<endl;
        cout<<"Age:"<< age<<endl;
    }
};

//derived class inheritance
class student: public person
{

    private:
    int rollno;
    float marks;
    public:
    //constructor
    student(string n,int a,int r,float m): person(n,a)
    {
        rollno =r ;
        marks=m;
    }
    //funtion overridding(polymorphsim)
    void display()
    {
        cout << "Student Details:\n";
        cout << "Name: " << name << endl;   // inherited
        cout << "Age: " << age << endl;     // inherited
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

//derived class for Teacher
class Teacher: public person
{
    private:
    string subject;
    public:
    //constructor
    Teacher(string n,int a,string s): person(n,a)
    {
        subject=s;
    }
    //function overriding
    void display()
    {
        cout << "Teacher Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    //oblect creation
student s1("siddharth",20,101,85.5);
Teacher t1("sharma sir",45,"maths");
//polymorphism (base class pinter)
person*p ;

p=&s1;
p->display();

cout<<"-------------------\n";

p=&t1;
p->display();

return 0;

}
