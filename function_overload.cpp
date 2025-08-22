// function overloading

#include<iostream>
using namespace std;
void add(int a,int b)
{
    int s=a+b;
    cout<<endl<<"Result 1="<<s;
}
void add(int a,int b,int c)
{
    int s=a+b+c;
    cout<<endl<<"Result 2="<<s;
}
void add(int a,int b,int c,int d)
{
    int s=a+b+c+d;
    cout<<endl<<"Result 3="<<s;
}
void add(int a,int b,int c,int d,int e)
{
    int s=a+b+c+d+e;
    cout<<endl<<"Result 4="<<s;
}
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the five numbers";
    cin>>a>>b>>c>>d>>e;

    add(a,b);
    add(a,b,c);
    add(a,b,c,d);
    add(a,b,c,d,e);
    return 0;
}