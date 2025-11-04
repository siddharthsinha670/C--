//write a program to add two complex no.

#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;
    public:
    complex()
    {
        real=1;
        imag=1;
    }
    complex(int x)
    {
        real=x;
        imag=1;
    }
    complex(int x,int y)
    {
        real=x.real;
        imag=x.imag;
    }
    void input()
    {
        cout<<"Enter the real and imagianry part:";
        cin>>real>>imag;
    }
    void show()
    {
        cout<<endl<<"The complex no is="<<real<<"+"<<imag<<"i";    
    }
    void add()
    {
        real=x.real+y.real;
        imag=x.imag+y.iamg;
    }
};
int main()
{
    complex c1(2,3);
    c1.show();
    return 0;
}