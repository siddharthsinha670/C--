//Print the type of triangle:  Equilateral, Isosceles, Scalene


#include <iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3;
    cout<<("enter the first angle---");
    cin>>angle1;
    cout<<("ente the second angle---");
    cin>>angle2;
    cout<<("enter the third angle---");
    cin>>angle3;
    if(angle1==angle2 && angle2==angle3)
    {
        cout<<("the traingle is equalteral traingle.");
    }
    else if(angle1!=angle2 && angle1!=angle3 && angle2!=angle3)
    {
        cout<<("the traingle is Scalene traingle");
    }
    else
    {
        cout<<("the angle is Isosceles traingle.");
    }
    return 0;
}