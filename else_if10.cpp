//Calculate income tax based on salary range.

#include <iostream>
using namespace std;
int main()
{
    int income,incometax,tax;
    cout<<("Enter your income--");
    cin>>income;
    if(income<100000)
    {
        incometax=0; 
    }
    else if(income>=100000 && income<=500000)
    {
        incometax=5;
    }
    else if(income>=500000 && income<=1000000)
    {
        incometax=10;
    }
    else
    {
        cout<<("you need to come income tax office for verificaton near Manish Raj.");
        incometax=20;
    }
    tax=income*incometax/100;
    {
        cout<<("you need to pay tax--")<<tax;
    }
    return 0;
}