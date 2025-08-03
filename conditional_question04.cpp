//Check whether the temperature is cold, warm, or hot.

#include<iostream>
using namespace std;
int main()
{
    float celcius;
    cout<<("Enter the temperature in celcius:");
    cin>>celcius;
    if(celcius<=15)
    {
        cout<<("cold");
    }
    else if(celcius>=15 && celcius<=30)
    {
        cout<<("warm");
    }
    else
    {
        cout<<("hot");
    }
    return 0;
}