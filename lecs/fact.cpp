#include<iostream>
using namespace std;
class Fact
{
public:

 int factorial(int num)  //
{
     
if(num<0)
{
    cout<<"try again";
}

   else if(num==0||num==1)
{
return 1;
}
 else 
 {
     return num*factorial(num-1);//logic
 }
}

};
int main(){
    int x;
    cout<<"enter number to find factorial:"<<endl;
    cin>> x;
    Fact f;

    int result= f.factorial(x);
    cout<<result;


    return 0;
}