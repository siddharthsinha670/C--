//write a program to add two complex no.

#include<iostream>
using namespace std;

class complex
{
private:
    int real;
    int imag;

public:
    complex() // default constructor
    {
        real = 1;
        imag = 1;
    }

    complex(int r, int i) // parameterized constructor
    {
        real = r;
        imag = i;
    }

    complex(complex &x) // copy constructor
    {
        real = x.real;
        imag = x.imag;
    }

    void input()
    {
        cout << "Enter the real and imaginary part: ";
        cin >> real >> imag;
    }

    void show()
    {
        cout << endl << "The complex number is = " << real << "+" << imag << "i";
    }

    void add(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(4, 5);
    complex c3;

    c3.add(c1, c2);

    cout << "First complex number:";
    c1.show();

    cout << "\nSecond complex number:";
    c2.show();

    cout << "\nAfter addition:";
    c3.show();

    return 0;
}
