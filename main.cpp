#include<iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int x=3,y=4;
    cout<<"Addition is: "<<add(x,y)<<endl;
    return 0;
}
int add(int a, int b)
{
    return a+b;
}