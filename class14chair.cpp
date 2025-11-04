//Create a class Chair with members material and price. Take input and display the details.
#include<iostream>
using namespace std;
class chair
{
    private:
    int price;
 string material;
    public:
    void input()
    {
        cout<<"Enter the material use in the chair,and price of the chair:";
        cin>>material>>price;
    }
    void show()
    {
        cout<<"the material use in chair and price of it is="<<material<<"/"<<price;
    }
};
int main()
{
    chair ch;
    ch.input();
    ch.show();
    return 0;
}