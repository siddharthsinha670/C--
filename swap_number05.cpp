//swappinng two number without using third variable

#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<endl<<"Enter the two number:";
   cin>>a>>b;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<endl<<"swapping number is:"<<a<<"  "<<b;
   return 0;
   
}