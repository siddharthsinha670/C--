//Input 10 elements and print the sum of even and odd numbers separately

#include<iostream>
using namespace std;
int main()
{
    int arr[10], evenSum = 0, oddSum = 0;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    cout << "The sum of the even numbers is: " << evenSum << endl;
    cout << "The sum of the odd numbers is: " << oddSum << endl;
    return 0;
}