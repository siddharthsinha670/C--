//Print only the 3rd element of the array.

    #include <iostream>
using namespace std;

int main()
{
    int arr[5]; // Declare an array of size 5

    // Input values into the array
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }

    // Print the 3rd element (index 2 because index starts from 0)
    cout << "The 3rd element is: " << arr[2] << endl;

    return 0;
}