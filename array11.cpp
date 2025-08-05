//Input 7 numbers and count how many are negative.

#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    cout<<("Enter the number:");
    int a;
    for(a=1;a<7;a++)
    {
        cin>>arr[a];
    }
    for(a=1;a<7;a++)
    {
        if(arr[a]<0)
        {
            cout<<("the number is greater than 50:")<<arr[a]<<endl;
        }
    }
    return 0;
}