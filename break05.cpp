#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the operator(+ - * /)";
    cin>>op;

    cout<<"Enter the  second number:";
    cin>>b;

    switch(op)
    {
        case '+':
        cout<<"Result ="<<a+b;
        break;

        case '-':
        cout<<"Result ="<<a-b;
        break;

        case '*':
        cout<<"result ="<<a*b;
        break;

        case '/':
        cout<<"result ="<<a/b;

        default:
        cout<<"Invalid operator";
    }
    return 0;
}