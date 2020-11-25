#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{return a+b;}
int main(){
    
    cout<<"the sum of int:"<<sum(5,5)<<endl;
    
    cout<<"the sum of floayt:"<<sum(9.5,5.0)<<endl;
    
    return 0;
}