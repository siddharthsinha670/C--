//Take 10 numbers from the user and print only the even numbers.

#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 numbers:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Even numbers are:" << endl;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}