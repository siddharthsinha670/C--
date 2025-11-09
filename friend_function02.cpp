//

#include<iostream>
using namespace std;
class add
{
    private:
    int a,b; //private data member
    public:
    void input()
    {
        cout<<"Enter the numbers:";
        cin>>a>>b;
    }
    //declare friend function
    friend int sum(add obj);
};
//friend function defination
int sum(add obj)
{
    return obj.a+obj.b; //access private data
}
int main()
{
    add obj;
    obj.input();
    cout<<"sum ="<<sum(obj);
    return 0;
}