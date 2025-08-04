//Write a program to print day of the week using switch (1=Monday, ..., 7=Sunday).

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<("Enter the number:");
    cin>>day;
    switch(day)
    {
        case 1: cout<<("sunday");
        break;
        case 2: cout<<("monday");
        break;
        case 3: cout<<("tuesday");
        break;
        case 4: cout<<("wednesday");
        break;
        case 5: cout<<("thrusday");
        break;
        case 6: cout<<("friday");
        break;
        case 7: cout<<("saturday");
        break;
        default: cout<<"Invalid input";
    }
    return 0;
}