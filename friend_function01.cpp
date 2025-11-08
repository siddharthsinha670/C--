//FRIEND FUNCTION
//WAP to add tw number using friend function

#include<iostream>
using namespace std;
class ankit
{
    private:
    string tv;
    public:
    void show()
    {
        tv="IPL final 2021";
    }
     friend void ankush(ankit r);
};
void ankush (ankit r)
{
    cout<<" I am Watching tv."<<r.tv;
}
int main()
{
    ankit a;
    a.show();
    ankush(a);
    return 0;
}