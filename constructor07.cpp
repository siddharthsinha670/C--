//Write a program to create a class with a default constructor that prints a message.

#include<iostream>
using namespace std;
class note
{
    private:
    int a;
    int b;
    int c;
    public:
    note() //default constructor
    {
        a=1;
        b=2;
        c=3;
    }
    note(note &x)
    {
        a=x.a;
        b=x.b;
        c=x.c;
    }
    void input()
    {
        cout<<"enter the message:";
    }
    void show()
    {
        cout<<"The message is:"<<a   <<  b<<  c;
    }
};
int main()
{
    note n1;
    n1.show();
    return 0;
}