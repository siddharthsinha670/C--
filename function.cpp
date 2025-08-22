//function with deafult value

#include<iostream>
using namespace std;
void add(int a=0,int b=0,int c=0,int d=0,int e=0)
{
    int s=a+b+c+d+e;
    cout<<endl<<"Result="<<s;
}
int main()
{
   int a,b,c,d,e;
   cout<<"Enter the number:";
   cin>>a>>b>>c>>d>>e;
   add(a,b);
   add(a,d,e);
   add(a,c,e);
   return 0; 

}