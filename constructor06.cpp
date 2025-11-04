#include<iostream>
using namespace std;
class car
{
    string brand;
    string model;

public:
    // parameterized constructor
    car(string b, string m)
    {
        brand = b;
        model = m;
    }
    void display()
    {
        cout << "car brand :" << brand << endl;
        cout << "car model: " << model << endl;
    }
};
int main()
{
    // constructor call with paarameters
    car car1("toyota", "fortuner");
    car car2("hundai", "creta");

    car1.display();
    car2.display();
    return 0;
}
