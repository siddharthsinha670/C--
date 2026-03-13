//4.	Swap two numbers without third variable.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter A:";
    cin>>a;
    cout<<"enter B:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swap a:"<<a;
    cout<<"swap b:"<<b;
    return 0;
    
}