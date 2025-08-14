//Declare and initialize a 2D array of size 3x3 with integers from 1 to 9 and print it.

#include<iostream>
using namespace std;
int main()
{
    int a[3][3] = { {1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9} };
    cout << "Array Elements:\n";    
    for(int i = 0; i < 3; i++)  
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;   
    }
    return 0;   
}