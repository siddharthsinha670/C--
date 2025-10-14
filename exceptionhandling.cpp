//exception handaling

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enecution starting...."<<endl;
    int a,b,c;
    cout<<"Enter the two number:";
    cin>>a>>b;
    //c=a/b;
    //cout<<"Result:"<<c;
    try
    {

        if(b==0)
        throw b;
        c=a/b;
        cout<<"result:"<<c;
    }
    catch(int x)
    {
        cout<<"cant divided by"<< x;
    }
    
    cout<<endl<<"Execution ended...";
    return 0;
}