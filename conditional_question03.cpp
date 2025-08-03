//Take two numbers and perform the selected operation (+, −, ×, ÷).


#include<iostream>
using namespace std;
int main()
{
    int a,b,add,multiply,substract,divide;
    cout<<("Enter the first number:/n");
    cin>>a;
    cout<<("Enter the second number:/n");
    cin>>b;
    add=a+b;
    {
        cout<<("the sum of the number is:")<<add;
    }
    multiply=a*b;
    {
        cout<<("the multiply of the number is:")<<multiply;
    }
    substract=a-b;
    {
        cout<<("the substract of the number is:")<<substract;
    }
    divide=a/b;
    {
        cout<<"the divide of the number is:"<<divide;
    }
    return 0;
}