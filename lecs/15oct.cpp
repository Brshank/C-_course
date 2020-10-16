#include <iostream>
using namespace std;
class A
{
    private:
    //protected:
    int a;
    public:
    A()
    {
        cout<<"Default Constructor in A"<<endl;
        a=1;
    }
    A(int a)
    {
        cout<<"parametrised constructor in A"<<endl;
        this->a=a;
    }
    void display()
    {
        cout<<a<<endl;
    }
    void setA(int t)
    {
        a=t;
    }

    ~A()
    {

        cout<<"Destructor A"<<endl;
    }

};
//class derived class : modeofinheritance base class
class B:private A
{
    private:
    int b;
    public:
    B()
    {
        cout<<"Default Constructor in B"<<endl;
        b=2;
    }
    B(int a, int b):A(a)
    {
        cout<<"parametrised constructor in B"<<endl;
        this->b=b;
    }
    //Run time Polymorphism
    //overriding
    void display()
    {
         A::display();
        //cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
    ~B()
    {
        cout<<"Destructor B"<<endl;
    }
};


int main()
{
   // B obj(3,4);
    B ob(4,3);
    ob.display();
    A oa(5);
    oa.display();
  
    //protected out side class
    //cout<<obj.a<<endl;
    //obj.display();
}