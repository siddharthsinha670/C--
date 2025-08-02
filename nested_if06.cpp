//Check whether a person is a teenager (age between 13 to 19).

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("enter the age.");
    cin>>age;
    if(age>=13)
    {
        if(age>=13 && age<=19)
        {
            cout<<("He is teenager");
        }
        else
        {
            cout<<("he is seniour citizen.");
        }
    }
    else
    {
        if(age<=10 && age>19)
        {
            cout<<("he is seniour citizen.");
        }
        else
        {
            cout<<("he is kid.");
        }
    }

    return 0;
}