// multiply using function overlaod

#include<iostream>
using namespace std;
void multi(int a,int b,int c,int d,int e)
{
    int s=a*b*c*d*e;
    cout<<endl<<"Result 1:"<<s;
}
void multi (int a,int b,int c,int d)
{
    int s=a*b*c*d;
    cout<<endl<<"Result 2:"<<s;
}
void multi(int a,int b,int c)
{
    int s=a*b*c;
    cout<<endl<<"Result 3:"<<s;
}
void multi(int a,int b)
{
    int s=a*b;
    cout<<endl<<"Result 4:"<<s;
}
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the number:";
    cin>>a>>b>>c>>d>>e;
    multi(a,b,c,d,e);
    multi(a,b,c,d);
    multi(a,b,c);
    multi(a,b);
    return 0;
}
