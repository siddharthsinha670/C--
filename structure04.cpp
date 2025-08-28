//wap to display a date using structure

#include<iostream>
using namespace std;
struct date
{
    int d;
    int m;
    int y;
};
int main()
{
    struct date t;
    cout<<"Enter the date: ";
    cin>>t.d>>t.m>>t.y;
    cout<<"The date is ="<<t.d<<"/"<<t.m<<"/"<<t.y;
    return 0;
}