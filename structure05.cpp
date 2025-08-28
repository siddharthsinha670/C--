//wap to display complex number using structure

#include<iostream>
using namespace std;
struct complex
{
    int a;
    int b;
};
int main()
{
    struct complex c;
    cout<<"Enter the number :";
    cin>>c.a>>c.b;
    cout<<"The complex number is="<<c.a<<"+"<<c.b<<"i";
    return 0;

}