//Write a class Time with hours, minutes, and seconds. Add two time objects and display the sum.

#include<iostream>
using namespace std;
class time
{
    private:
    int hours;
    int minute;
    int second;
    public:
    void input()
    {
        cout<<"Enter the hours,minute and second:";
        cin>>hours>>minute>>second;
    }
    void show()
    {
        cout<<"the time is :"<<hours<<"/"<<minute<<"/"<<second;
    }
};
int main()
{
    time t;
    t.input();
    t.show();
    return 0;
}