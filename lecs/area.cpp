#include<iostream>
using namespace std;
class Shape
{
    int i;
    public:
   virtual int noOfSides()=0;
   virtual double Area()=0;
   virtual double Perimeter()=0;
};
class Quadrilateral: public Shape
{
    public:
    int noOfSides()
    {
        return 4;
    }
};
class Rectangle:public Quadrilateral
{
    double len,wid;
    public:
    Rectangle(int len,int wid)
    {
        this->len=len;this->wid=wid;
    }
    double Area()
    {
        return len*wid;
    }
    double Perimeter()
    {
        return 2*(len+wid);
    }
};
int main()
{
    Rectangle obj(3,4);
    cout<<obj.Area()<<endl;
    cout<<obj.Perimeter()<<endl;
    cout<<obj.noOfSides()<<endl;

}