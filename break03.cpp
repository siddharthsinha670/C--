//Accept 10 numbers from the user. If the user enters a positive number, stop taking input using break.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<("Enter the number:");
    for(int a= 1;a<=10;a++)
    {
        cin>>num;
        if(num>0)   
        break;
    }
    return 0;
}
