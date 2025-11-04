//Create a class Rectangle with data members length and breadth.
//Write functions to calculate area and perimeter

#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void input()
    {
        cout<<"Enter the length and breadth of the rectangle:";
        cin>>length>>breadth;
    }
    void area()
    {
        int a = length * breadth;
        cout << "The area of the rectangle is = " << a << endl;
    }
    void perimeter()
    {
         int p = 2 * (length + breadth);
        cout << "The perimeter of the rectangle is = " << p << endl;
    }
    void show()
    {
        cout<<"the length and breadth of the rectangle are="<<length<< "and "<< breadth <<endl;
    }
};
int main()
{
    rectangle rect;
    rect.input();
    rect.show();
    rect.area();
    rect.perimeter();
    return 0;

}
