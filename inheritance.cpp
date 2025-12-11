//inheritance inhtoduction

#include<iostream>
using namespace std;
class dad
{
    protected:
    int amount;
    public:
    void input()
    {
        amount=10000;
    }
};
class son: public dad
{
    int money;
    public:
    void show()
    {
        money=40000;
        cout<<"Son money "<<money<<endl;
        cout<<"Dad money "<<amount;
    }
    void add(A r)
    {
        c=r.a+r.b;
        cout<<c;
    }
};
int main()
{
    A a;
    a.input();
    a.obj;
    obj.add(a);
    return 0;
}
