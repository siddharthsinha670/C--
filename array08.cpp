//Input 5 marks of a student and find the average.


#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int a;
    cout<<("enter the marks:");
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
    }
    int avg;
    avg=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
    {
        cout<<("the average of the marks is:")<<avg;
    }
    return 0;

}