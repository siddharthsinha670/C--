// Print numbers from 1 to 10 using goto.
//Write a program that uses a goto statement to print numbers from 1 to 10.


#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a<=10)
    goto value;
    else
    goto Novalue;

    value:
    cout<<"valid";
    return 0;
    Novalue:
    cout<<"Invalid";
    return 0;
}