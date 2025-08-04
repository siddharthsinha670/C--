//Accept 10 numbers from the user. If the user enters a negative number, stop taking input using break


#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter 10 numbers (input will stop if a negative number is entered):" << endl;
    for(int i = 1; i <= 10; i++)
    {
        cin >> num;
        if(num < 0)
            break;
    }
}    