//Run a loop from 1 to 100. Use break when the number is divisible by both 3 and 7.

#include<iostream>
using namespace std;
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(a%3==0 && a%7==0)
        break;
        cout<<a << " ";
    }
}