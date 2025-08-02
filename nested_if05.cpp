//Check whether a number is even and greater than 100.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<("Enter the number.");
    cin>>a;
    if(a%2==0)
    {
        if(a>=100)
        {
            cout<<("the number is  even and greater than 100.");
        }
        else
        {
            cout<<("the number even but not greater than 100.");
        }
    }
    else
    {
        if(a%2!=0)
        {
            cout<<("the number is odd.");
        }
        else
        {
            cout<<("invalid input");
        }
    }
    return 0;
}