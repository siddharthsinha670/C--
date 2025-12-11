// single inheritancee

#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"constructor of the A";
    }
    ~A()
    {
        cout<<endl<<"Destructor of A";
    }
    void show1()
    {
        cout<<endl<<"show 1 function of A"; 
    }
    void show2()
    {
        cout<<endl<<"Show 2 function of B";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<endl<<"Constructor of B";
    }
    ~B()
    {
        cout<<endl<<"Destructor of B";
    }
    void show3()
    {
        cout<<endl<<"show 3 function of B";
    }
    void show4()
    {
        cout<<endl<<"Show 4 function of B";
    }   
};
int main()
{
    B b1;
    b1.show1();
    b1.show2();
    b1.show3();
    b1.show4();
    return 0;
}
    