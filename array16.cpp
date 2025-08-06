//Check if a given number exists in the array or not.


#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,11,12,13,14};
    int a;
    cout<<("enter the number:");
    cin>>a;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            cout<<(" the number is available in array.")<<endl;
            break;
        }
    }
    return 0;

}