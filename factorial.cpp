//factorial

#include<iostream>
using namespace std;
int main()
{
    int i,n,f;
    cout<<("Enter the number")<<endl;
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial value is:"<<f;
    return 0;
}
