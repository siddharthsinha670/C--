//Visibilty
//class= private,public
//define thedata class and implement visibiltiy

#include<iostream>
using namespace std;
class date
{
    private:
    int d;
    int m;
    int y;
    public:
    void input()
    {
        cout<<"Enter the date,month and year:";
        cin>>d>>m>>y;
    }
    void show()
    {
        cout<<endl<<"The date is:"<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date dt;
    dt.input();
    dt.show();
    return 0;
}