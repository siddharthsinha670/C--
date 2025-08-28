//complex number using structure in function

#include<iostream>
using namespace std;
struct complex
{
    int a;
    int b;
    int c;
    void input()
    {
        cout<<"Enter the real and immaganiary part";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"The complex number is:"<<a<<"+"<<b<<"i";
    }
};
int main()
{
    struct complex c;
    c.input();
    c.show();
    return 0;
}