//student detail using structure

#include<iostream>
using namespace std;
struct student
{
    char *name;
    int rollno;
    char *address;
    int marks;
    char *course;
};
int main()
{
    struct student s;
    cout<<"Enter the name:";
    cin>>s.name;
    cout<<"Enter the marks:";
    cin>>s.marks;
    cout<<"Enter the rollno:";
    cin>>s.rollno;
    cout<<"Enter the address:";
    cin>>s.address;
    cout<<"Enter the course:";
    cin>>s.course;
    cout<<endl<<"name: "<<s.name;
    cout<<endl<<"rollno: "<<s.rollno;
    cout<<endl<<"address: "<<s.address;
    cout<<endl<<"marks: "<<s.marks;
    cout<<endl<<"course: "<<s.course;
    return 0;
}
