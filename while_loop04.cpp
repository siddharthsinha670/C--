//mulipliction of firsst 10 natural number 

#include<iostream>
using namespace std;
int main()
{
    int i=1, multi=1;
    while(i<=10)
    {
        multi=multi*i;
        i++;
    }
    cout<<"Multiplication of first 10 natural numbers is: "<<multi;
    return 0;
}