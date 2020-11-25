#include<iostream>
#include<cmath>
using namespace std;
//class classname
//{
//	
	
//};
class ComplexNumber
{
	//data members 
    private:
	double real,imag;
	//member methods
	//construtor
	//implicitly
	public:
	ComplexNumber()
	{
		cout<<"Default Constructor"<<endl;
		real=imag=0;
	}
	//overloading
	ComplexNumber(double r,double i)
	{
		cout<<"Parametrized Constructor"<<endl;
		real=r;
		imag=i;
	}
	void display()
	{
		if(imag>=0)
		{
			cout<<real<<"+j"<<imag<<endl;
		}
		else
		{
			cout<<real<<"-j"<<-imag<<endl;
		}
		
	}
	void display2()
	{
		cout<<real<<endl;
		
	}
	//function declaration and  defination
	ComplexNumber add(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.real=c1.real+c2.real;
		result.imag=c1.imag+c2.imag;
		return result;
	}
	ComplexNumber add(ComplexNumber c1)
	{
		ComplexNumber result;
		result.real=c1.real+this->real;
		result.imag=c1.imag+this->imag;
		return result;
	}
	ComplexNumber sub(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.real=c1.real-c2.real;
		result.imag=c1.imag-c2.imag;
		return result;
	}
		ComplexNumber mul(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.real=(c1.real*c2.real - c1.imag*c2.imag);
		result.imag=(c1.real*c2.imag+c1.imag*c2.real);
		return result;
	}
		ComplexNumber div(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.real=(((c1.real*c2.real + c1.imag*c2.imag)/(pow(c2.real,2)+ pow(c2.imag,2))));
		result.imag=((c1.imag*c2.real - c1.real*c2.imag)/(pow(c2.real,2)+ pow(c2.imag,2)));
		return result;
	}
	ComplexNumber con(ComplexNumber c1)
	{
		ComplexNumber result;
		result.real=c1.real;
		result.imag=-c1.imag;
		return result;
	}
		ComplexNumber mag(ComplexNumber c1)
	{
		ComplexNumber result;
		result.real=pow(((c1.real*c1.real)+(c1.imag*c1.imag)),0.5);
		return result;
		
	}
		ComplexNumber pha(ComplexNumber c1)
	{
		ComplexNumber result;
		result.real=tan(c1.imag/c1.real);
		return result;
	}
	
//  ComplexNumber sub(ComplexNumber)
//  ComplexNumber mul(ComplexNumber)
// ComplexNumber div(ComplexNumber)
// ComplexNumber conj(ComplexNumber)
// double mag(ComplexNumber)
// double phase(ComplexNumber)
};
int main()
{
	//object holds memory
	ComplexNumber obj1(3,4);
	obj1.display();
	ComplexNumber obj2(10,-20);
	obj2.display();
	ComplexNumber res;
//	calling add method
	res=res.add(obj1,obj2);
	cout<<"Function with 2 Paratmeters"<<endl;
	res.display();
//	ComplexNumber add(ComplexNumber c1)
	res= obj1.add(obj2);
	cout<<"Function with 1 Paratmeters"<<endl;
	res.display();
//  calling sub method 
    res=res.sub(obj1,obj2);
    res.display();
//  calling mul method 
    res=res.mul(obj1,obj2);
    res.display();
//  calling div method 
    res=res.div(obj1,obj2);
    res.display();
//  calling con method 
    res=res.con(obj1);
    res.display();    
//calling mag method
    res=res.mag(obj1);
    res.display2();
//calling phase method
    res=res.pha(obj1);
    res.display2();

}