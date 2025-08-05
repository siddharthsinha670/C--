//Input 5 numbers and print only the numbers greater than 50.

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<("Enter the number:");
    int a;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
    }
    for(a=0;a<5;a++)
    {
        if(arr[a]>50)
        {
            cout<<("the number is greater than 50:")<<arr[a]<<endl;
        }
    }
    return 0;
}