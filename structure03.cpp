//wap to display date by using  structure

#include<iostream>
using namespace std;
struct time
{
    int h;
    int m;
    int s;
};
int main()
{
    struct time t;
    cout<<"Enter the time: ";
    cin>>t.h>>t.m>>t.s;
    cout<<"The time is: "<<t.h<<":"<<t.m<<":"<<t.s;
    return 0;
}
