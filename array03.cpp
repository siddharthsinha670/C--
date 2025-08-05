//Take 10 numbers from the user and print only the odd numbers.

#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"enter the 10 numbers:"<<endl;
    for(int i=0 ; i<10 ; i++)
    {
        cin>>arr[i];
    }
    cout<<"odd number are:"<<endl;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==1)
        {
            cout<<arr[i]<< " ";
        }
    }
    return 0;
}