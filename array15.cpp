//Input 5 integers and find how many numbers are divisible by 3.

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,11,12,13,14};
    int a;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
    } 
    for(a=0;a<5;a++)//254488
    {
        if(arr[a]%3==0)
        {
            cout<<("the number divisible by 3 is:")<<arr[a]<<endl;
        }
    }
    return 0;
    
}