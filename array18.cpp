//input and print 5 numbers using an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int a;
    cout<<("Enter the  number:");
    cin>>a;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
    }
    for(a=0;a<5;a++)
    {
        cout<<"the number is:"<<arr[a]<<endl;
    }
    return 0;
}