//Find the largest number in a 1-D array of 6 integers.


#include<iostream>
using namespace std;
int main()
{
    int arr[6]={12, 45, 23, 67, 34, 89};
    int largest_no=0;
    if(arr[0]>arr[1] && arr[0]>arr[2] && arr[0]>arr[3] && arr[0]>arr[4] && arr[1]>arr[5])
    {
        cout<<"12 is the greatest number."<<arr[0];
    }
    else if(arr[1]>arr[0] && arr[1]>arr[2] && arr[1]>arr[3] && arr[1]>arr[4] && arr[1]>arr[5])
    {
        cout<<"45 is the greatest number."<<arr[1];
    }
    else if(arr[2]>arr[0] && arr[2]>arr[1] && arr[2]>arr[3] && arr[2]>arr[4] && arr[2]>arr[5])
    {
        cout<<"23 is the greatest number."<<arr[2];
    }
    else if(arr[3]>arr[0] && arr[3]>arr[1] && arr[3]>arr[2] && arr[3]>arr[4] && arr[3]>arr[5])
    {
        cout<<"67 is the greatest number."<<arr[3];
    }
    else if(arr[4]>arr[0] && arr[4]>arr[1] && arr[4]>arr[2] && arr[4]>arr[3] && arr[4]>arr[5])
    {
        cout<<"34 is the greatest number."<<arr[4];
    }
    else if(arr[5]>arr[0] && arr[5]>arr[1] && arr[5]>arr[2] && arr[5]>arr[3] && arr[5]>arr[4])
    {
        cout<<"89 is the greatest number."<<arr[5];
    }
    else 
    {
       cout<<"Invalid number."<<endl;
    }
    return 0;

}
