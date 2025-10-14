//Create a class Book that stores title, author, and price. Write a function to display book details.

#include<iostream>
using namespace std;
class book
{
    private:
    string name;
    string author;
    int price;
    public:
    void input()
    {
        cout<<"enter the name of the author:";
        cin>>author;
        cout<<"Enter name of the book:";
        cin>>name;
        cout<<"Enter the price of the book:";
        cin>>price;
    }
    void show()
    {
        cout<<endl<<"The name of the author is:"<<author;
        cout<<endl<<"The nameof the book is:"<<name;
        cout<<endl<<"The price of the book is:"<<price;
    }
};
int main()
{
    book bok;
    bok.input();
    bok.show();
    return 0;
}