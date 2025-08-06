//Input 5 numbers in an array and print each number on a new line.

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the numbers:";
    int a;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
        
    }
     for(a=0;a<5;a++)
    {
        cout<<("the number are in line:")<<arr[a]<<endl;
    }
    return 0;
   
}
