//Declare an array with fixed values {1, 2, 3, 4, 5} and print them.

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int a;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
        
    }
    for(a=0;a<5;a++)
    {
        cout<<("the number is:")<<arr[a]<<endl;
    }
    return 0;
}