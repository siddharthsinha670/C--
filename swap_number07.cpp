//call by reference
//swap the content of two variable

#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    
    int x,y;
    cout<<"Enter the number:";
    cin>>x>>y;
    cout<<endl<<"value of x="<<x;
    cout<<endl<<"value of y="<<y;
    swap(x,y);
    cout<<endl<<"value of the x="<<x;
    cout<<endl<<"value of the y="<<y;
    return 0;
}