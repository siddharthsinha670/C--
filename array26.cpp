//input 10 numbers and calculate the sum of all numbers.


#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int a;
    cout<<("Enter the  number:");
    for(a=0;a>=5;a++)
    {
        cin>>arr[a];
    }
    int sum=0;
    for(a=0;a>=5;a++)
    {
        sum+=arr[a];
    }
    cout<<"The sum of the number is:"<<sum<<endl;
    return 0;
}