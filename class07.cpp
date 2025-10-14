//Write a program to create a class Car with members brand, model, and year. Print the car info using a member function.


#include<iostream>
using namespace std;
class car
{
    private:
    string brand;
    string model;
    int year;
    public:
    void input()
    {
        cout<<"Enter the name of the brand:";
        cin>>brand;
        cout<<"Enter the model of the car:";
        cin>>model;
        cout<<"Enter the year of the car:";
        cin>>year;
    }
    void show()
    {
        cout<<endl<<"the name of the brand of the car is:"<<brand;
        cout<<endl<<"the name of the model of the car is:"<<model;
        cout<<endl<<"The year of the car:"<<year;
    }
};
int main()
{
    car cr;
    cr.input();
    cr.show();
    return 0;
}