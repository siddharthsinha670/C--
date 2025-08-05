//Take input in an array and find the product (multiplication) of all elements.

#include<iostream>
using namespace std;
int main()
{
    int arr[2];
    cout<<("Enter the number:");
    int a,multiply;
    for(a=0;a<2;a++)
    {
        cin>>arr[a];
    }
    for(a=0;a<2;a++)
    {
        multiply=arr[0]*arr[1];
        if(multiply>0)
        {
            cout<<("multiply of the number is:")<<multiply<<endl;
        }
    }
    return 0;
}