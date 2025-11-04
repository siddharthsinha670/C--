//Ek class Student banao jisme default constructor name aur roll number print kare.

#include<iostream>
using namespace std;
class student
{
    int a, b;
    public:
    student()
    {
        a=50; b=70;
        cout<<a<<endl<<b;
    }
};
int main()
{
    student stu;
    return 0;
}