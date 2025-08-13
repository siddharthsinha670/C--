//two dimensional array

#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j;
    cout<<"Enter the Element :";
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nArray Elements:\n";
    for(j=0;j<=1;j++)
    {
        for(j=0;j<=1;j++)
        {
            cout<<a[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}