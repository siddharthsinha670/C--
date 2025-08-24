//find area of recatngle ,square,circle using function overload

#include<iostream>
using namespace std;
void area(int l,int b)
{
    int s=l*b;
    cout<<endl<<"Area of the Rectangle:="<<s;
}
void area(int l)
{
    int s=l*l;
    cout<<endl<<"Area of the square:-"<<s;
}
void area(float r)
{
    float s=3.14*r*r;
    cout<<endl<<"Area of the circle:-"<<s;
}
int main()
{
    int l,b,r;
    cout<<"Enter the number:";
    cin>>l>>b>>r;
    area(l,b);
    area(l);
    area(r);
    return 0;
}