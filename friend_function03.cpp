//wap to multiply two number using friend function.

#include<iostream>
using namespace std;
class multiply
{
    int a;
    int b;
    void input()
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
        cout<<"Enter the two number :";
        cin>>a>>b;
    }
    //declare friend function
    friend int multiply(multiply obj);
};
