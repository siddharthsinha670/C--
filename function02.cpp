// multiply using function with deafult value

#include<iostream>
using namespace std;
void multi(int a=1,int b=1,int c=1,int d=1,int e=1)
{
    int s=a*b*c*d*e;
    cout<<endl<<"Result: "<<s;
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
