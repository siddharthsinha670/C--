//passing object as argument
//write a program to add to complex no.

#include<iostream>
using namespace std;
class complex
{
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
        real=x;
        imag=y;
    }
    complex(complex &x)
    {
        real=x.real;
        imag=x.imag;
    }
    ~complex()
    {
        cout<<endl<<"Destructor called";
    }
    void input()
    {
        cout<<"Enter the real and imaginary part";
        cin>>real>>imag;
    }
    void show()
    {
        cout<<endl<<"The complex no="<<real<<"+"<<imag<<"i";
    }
    void add(complex x,complex y)
    {
        real=x.real+y.real;
        imag=x.imag+y.imag;
    }
};
int main()
{
    complex c1(2,3);
    c1.show();
    complex c2(5,7);
    c2.show();
    complex c3;
    c3.add(c1,c2);
    c3.show();
    return 0;
}