//swap the comtent of thwo variable
//call by address
#include<iostream>
using namespace std;
void swap(int *a,int*b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x,y;
    cout<<"swap a number";
    cin>>x>>y;
    cout<<endl<<"value of the x="<<x;
    cout<<endl<<"value of the y="<<y;
    swap(&x,&y);
    cout<<endl<<"value of x="<<x;
    cout<<endl<<"value of y="<<y;
    return 0;
}