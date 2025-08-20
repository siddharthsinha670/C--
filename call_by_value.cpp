//call by value


#include<iostream>
using namespace std;
void swap(int a,int b)
{
    cout<<endl<<"value of a="<<a;
    cout<<endl<<"value of b="<<b;
    int c=a;
    a=b;
    b=c;
    cout<<endl<<"value of a="<<a;
    cout<<endl<<"value of b="<<b;
}
int  main()
{
    int x,y;
    cout<<"Enter the two number:";
    cin>>x>>y;
    cout<<endl<<"value of x="<<x;
    cout<<endl<<"value of y="<<y;
    return 0;

}