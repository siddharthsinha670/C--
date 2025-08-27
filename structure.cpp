#include<iostream>
using namespace std;
struct stu 
{
    int a;
    char b;
    float c;
};
int main()
{
    struct stu s;
    cout<<"maximum size of the structure:%d"<<sizeof(s);
    return 0;
}