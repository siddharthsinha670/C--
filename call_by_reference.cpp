//call by reference


#include <iostream>
using namespace std;    
void swap(int &a,int &b)
{
    cout<<endl<<"address of a="<<&a;
    cout<<endl<<"address of b="<<&b;
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int x,y;
    cout<<"Enter the two number:";
    cin>>x>>y;
    cout<<endl<<"value of the x="<<x;
    cout<<endl<<"value of the y="<<y;
    cout<<endl<<"address of the x="<<x;
    cout<<endl<<"address of the y="<<y;
    swap(x,y);
    cout<<endl<<"value of the x="<<x;
    cout<<endl<<"value of the y="<<y;
    return 0;
}