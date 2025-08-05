//Count how many even and odd numbers are in an array.


#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int even_count=0, odd_count=0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"Even numbers: "<<even_count<<endl;
    cout<<"Odd numbers: "<<odd_count<<endl;
    return 0;
}