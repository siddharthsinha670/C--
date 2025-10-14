//Create a class Complex with real and imaginary parts. Add two complex numbers using a member function.

#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;
    public:
    void input()
    {
        cout<<"enter the real part of the complex number:";
        cin>>real;
        cout<<"Enter the imagenary part of the complex number:";
        cin>>imag;
    }
    void show()
    {
        cout<<"Enter the real and imagianry part of the complex nummber:"<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    complex com;
    com.input();
    com.show();
    return 0;
}