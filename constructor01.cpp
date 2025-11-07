//constructor
//define the date class with constructor

#include<iostream>
using namespace std;
class date
{
    private:
    int m;
    int d;
    int y;
    public:
    date()
    {
        d=1;
        m=1;
        y=2025;
    }
    date(int d)
    {
        d=1;
        m=1;
        y=2025;
    }
    date(int d1,int m1)
    {
        d=d1;
        m=m1;
        y=2025;
    }
    date(int d1,int m1,int y1)
    {
        d=d1;
        m=m1;
        y=y1;
    }
    date(date &x)
    {
        d=x.d;
        m=x.m;
        y=x.y;
    }
    void input()
    {
        cout<<"Enter the date month and year:";
    }
    void show()
    {
        cout<<endl<<"The date is:"<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date dt1;
    dt1.show();
    date dt2(3,4);
    dt2.show();
    date dt3;
    dt3.show();
    return 0;  
}