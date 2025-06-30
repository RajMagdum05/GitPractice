#include<iostream>
using namespace std;

class Rectangle
{
    private:
            int length;
            int breadth;
    public: 
            void setLength(int l);
            void setBreadth(int b);

            int getLength(){return length;}
            int getBreadth(){return breadth;}

            Rectangle(int length, int breadth)
            {
                setLength(length);
                setBreadth(breadth);
            }
            Rectangle()
            {
                cout<<"This is Non-Parameterised Constructor."<<endl;
                cout<<"This is another sentence"<<endl;
            }
            int area();
            int perimeter();
};
void Rectangle::setLength(int l)
{
    if(l<0)
    {
        cout<<"Entered length is invalid!!"<<endl;
        exit(1);
    }
    else
    {
        length = l;
    }
}
void Rectangle::setBreadth(int b)
{
    if(b<0)
    {
        cout<<"Entered breadth is invalid!!"<<endl;
        exit(1);
    }
    else
    {
        breadth = b;
    }
}
int Rectangle::area()
{
    return breadth*length;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    int length, breadth;
    cout<<"Enter length of the rectangle: ";
    cin>>length;

    cout<<"Enter breadth of the rectangle: ";
    cin>>breadth;

    Rectangle r(length,breadth);
    cout<<"Area of the Reactangle is "<<r.area()<<"."<<endl;
    cout<<"Perimeter of the Rectangle is "<<r.perimeter()<<"."<<endl;

    return 0;
}
