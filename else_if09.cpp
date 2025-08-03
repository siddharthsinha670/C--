//Calculate electricity bill:
//<100 units: ₹1/unit
//100–200: ₹2/unit
//200: ₹3/unit


#include<iostream>
using namespace std;
int main()
{
    int unit,calculate,perunit;
    cout<<("Enter the unit---");
    cin>>unit;
    if(unit<=100)
    {
        perunit=1;
    }
    else if(unit>100 && unit<200)
    {
        perunit=2;
    }
    else if(unit==200)
    {
        perunit=3;
    }
    else 
    {
        cout<<("he need to come electricity office.");
    }
    calculate=unit*perunit;
    {
        cout<<("/nyour electricity bill is--")<<calculate;
    }
    return 0;

}