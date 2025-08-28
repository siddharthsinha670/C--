//wap to display a rational number

#include<iostream>
using namespace std;
struct rational
{
    int a;
    int b;
};
int main()
{
    struct rational r;
    cout<<"Enter the number:";
    cin>>r.a>>r.b;
    cout<<"the rational number is:"<<r.a<<"/"<<r.b;
    return 0;
}