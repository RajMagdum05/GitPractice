#include<iostream>
using namespace std;

int add(int a, int b);
int area(int length, int breadth);

int main()
{
    int x=3, y=4, l=5, b=4;
    cout<<"Addition is: "<<add(x,y)<<endl;
    cout<<"Area is: "<<area(l,b)<<endl;
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
int area(int length, int breadth)
{
    return length*breadth;
}
