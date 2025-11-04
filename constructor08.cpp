// define the date class with constructor

#include<iostream>
using namespace std;
class date
{
    private:
    int d;
    int m;
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
    date (date & x)
    {
        d=x.d;
        m=x.m;
        y=x.y;
    }
    void input()
    {
        cout<<"Enter the date,month and year:";
        cin>>d>>m>>y;
    }
    void show()
    {
        cout<<endl<<"The date="<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date dt1;
    dt1.show();
    date dt2(2,4);
    dt2.show();
    return 0;
}