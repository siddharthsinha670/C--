//Check whether a person can donate blood:   Age > 18, weight > 50 kg


#include<iostream>
using namespace std;
int main()
{
    int age,weight;
    cout<<("enter the age of the candidate:");
    cin>>age;
    cout<<("enter the weight of the candidate:");
    cin>>weight;
    if(age>18 && weight>50)
    {
        cout<<("He is valid for blood donation.");
    }
    else
    {
        cout<<("He in not valid for blood donation,");
    }
    return 0;
}