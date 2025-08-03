//Check if a number is one-digit, two-digit, or three-digit.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<("enter the number---");
    cin>>num;
    if(num>=0 && num<=9)
    {
        cout<<("the number has one digit.");
    }
    else if(num>=10 && num<=99)
    {
        cout<<("the number has two digit.");
    }
    else if(num>=100 && num<=999)
    {
        cout<<("the number has three digit.");
    }
    else
    {
        cout<<("invalid number");
    }
    return 0;
}