//Create a class Pen with members brand and color. Take input and display details of the pen.

#include<iostream>
using namespace std;
class pen
{
    private:
    string brand;
    string colour;
    public:
    void input()
    {
        cout<<"Enter the name of the brand :";
        cin>>brand;
        cout<<"Enter the colour of the pen :";
        cin>>colour;
    }
    void show()
    {
        cout<<"the name of the brand and colour is :"<<brand<<"-"<< colour;
    }
};
int main()
{
    pen p;
    p.input();
    p.show();
    return 0;
}
