//function overload using int and float datatype

// function overloading

#include<iostream>
using namespace std;
void add(int a,int b)
{
   int s=a+b;
    cout<<endl<<"Result 1="<<s;
}
void add(float a,float b)
{
    float s=a+b;
    cout<<endl<<"Result 2="<<s;
}
void add(int a,float b)
{
    float s=a+b;
    cout<<endl<<"Result 3="<<s;
}
void add(float a,int b)
{
    float s=a+b;
    cout<<endl<<"Result 4="<<s;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter the two integer numbers:";
    cin>>a>>b;
    cout<<"Enter the two float number:";
    cin>>x>>y;
    add(a,b);
    add(x,y);
    add(a,x);
    add(x,a);
    return 0;
}