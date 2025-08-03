//Compare three numbers and print the largest.

#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<("Enter the first number  .");
    cin>>num1;
    cout<<("Enter the second number  ");
    cin>>num2;
    cout<<("Enter the third number   ");
    cin>>num3;
    if(num1>=num2 && num1>=num3)
    {
        cout<<("the greatest number is first number.");
    }
    else if(num2>=num1 && num2>=num3)
    {
        cout<<("the greatest number is second number ");
    }
    else
    {
        cout<<("the greatest number is third number");
    }
    return 0;
}              