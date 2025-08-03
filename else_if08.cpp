//Print day of the week from day number (1 to 7).

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<("Enter the day---");
    cin>>day;
    if(day==1)
    {
        cout<<("sunday");
    }
    else if(day==2)
    {
        cout<<("monday");
    }
    else if(day==3)
    {
        cout<<("tuesday");
    }
    else if(day==4)
    {
        cout<<("wednesday");
    }
    else if(day==5)
    {
        cout<<("thrusday");
    }
    else if(day==6)
    {
        cout<<("friday");
    }
    else if(day==7)
    {
        cout<<"saturday";
    }
    else
    {
        cout<<("invalid day");
    }
    return 0;
}