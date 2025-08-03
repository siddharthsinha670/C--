//Print grade based on marks:90–100: A ; 80–89 ; B 70–79; C 60–69; D Below 60: F

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<("Enter the marks of student:");
    cin>> marks;
    if(marks>=90 && marks<=100)
    {
        cout<<("grade A");
    }
    else if(marks>=80 && marks<90)
    {
        cout<<("grade B");
    }
    else if(marks>=70 && marks<80)
    {
        cout<<("grade C");
    }
    else if(marks>=60 && marks<70)
    {
        cout<<("grade D");
    }
    else if(marks>=50 && marks<60)
    {
        cout<<("grade E");
    }
    else if (marks<50)
    {
        cout<<("grade F");
    }
    else
    {
        cout<<("Invalid marks");
    }
    return 0;
}