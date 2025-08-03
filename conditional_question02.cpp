//Validate if entered password matches a preset password.

#include<iostream>
using namespace std;
int main()
{
    int password;
    cout<<("Enter your password\n");
    cin>>password;
    if(password==2288)
    {
        cout<<("your password is correct");
    }
    else{
        cout<<("your password is inncorrect");
    }
    return 0;
}