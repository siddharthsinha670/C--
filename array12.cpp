//Print the square of each element in an array of 5 integers.


#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the number:";
    int a,square;
    for(a=0;a<5;a++)
    {
        cin>>arr[a];
    }
    for(a=0;a<5;a++)
    {
        square = arr[a] * arr[a]; // Calculate the square of the number
        if(square > 0) // Check if the square is positive
        {
            cout<<"the square of the number is "<<arr[a]<<" and its square is "<<square<<endl;
        }
    }
    return 0;
}