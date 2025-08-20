//swappingg of two number

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<endl<<"Enter the first number:";
    cin>>a;
    cout<<endl<<"Enter the second number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<endl<<"The value of a is:"<<a;
    cout<<endl<<"the value of b is:"<<b;
    return 0;
}