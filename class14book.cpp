//Create a class Book with members title, author, and price. Display the details using a function.

#include<iostream>
using namespace std;
class book
{
    private:
    string tittle;
    string author;
    int price;
    public:
    void input()
    {
        cout<<"Enter the tittle of the author :";
        cin>>tittle;
        cout<<"Enter the name of the author :";
        cin>>author;
        cout<<"Enter price of the book :";
        cin>>price;
    }
    void show()
    {
        cout<<"the title,name and price of the book is ;"<< tittle <<" "<< author <<" "<< price << " ";
    }
};
int main()
{
    book b;
    b.input();
    b.show();
    return 0;
}