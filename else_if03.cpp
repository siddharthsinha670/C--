//Categorize age group:
//0–2: Infant
//3–12: Child
//13–19: Teen
//20–59: Adult
//60+: Senior


#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("Enter the age.\n");
    cin>>age;
    if(age>0 && age<=2)
    {
        cout<<("Infant");
    }
    else if(age>=3 && age<=12)
    {
        cout<<("child");
    }
    else if(age>=13 && age<=19)
    {
        cout<<("teenagers");
    }
    else if(age>=20 && age<=59)
    {
        cout<<("seniours");
    }
    else if(age>=60)
    {
        cout<<("adult");
    }
    else 
    {
        cout<<("Invalid Number");
    }
    return 0;
}