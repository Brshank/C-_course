#include<iostream>
#include<cstring>
using namespace std;
template<class x> void swaparam(x&a,x&b)
{
    x temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"swapped both! \n";

}
int main()
{
    int i=10,j=40;
    float fi=98.10,fj=90.0;
    char chi='a',chj='b';
    string stri="Brshank", strj="Negi";

    cout<<"*_______*________*______*_______*______*______*"<<endl;
    cout<<"Integers prior to swap:"<<"\ti="<<i<<"\t j="<<j<<endl;
    swaparam(i,j);
    cout<<"Integers after swap:"<<"\ti="<<i<<"\t j="<<j<<"\n\n\n";
cout<<"*_______*________*______*_______*______*______*"<<endl;
    cout<<"Characters prior to swap:"<<"\ti="<<chi<<"\t j="<<chj<<endl;
    swaparam(chi,chj);
    cout<<"Characters after swap:"<<"\ti="<<chi<<"\t j="<<chj<<"\n\n\n";
cout<<"*_______*________*______*_______*______*______*"<<endl;
    cout<<"Float prior to swap:"<<"\ti="<<fi<<"\t j="<<fj<<endl;
    swaparam(fi,fj);
    cout<<"Float after swap:"<<"\ti="<<fi<<"\t j="<<fj<<"\n\n\n";
cout<<"*_______*________*______*_______*______*______*"<<endl;   
    cout<<"string prior to swap:"<<"\tstri="<<stri<<"\t strj="<<strj<<endl;
    swaparam(stri,strj);
    cout<<"string after swap:"<<"\tstri="<<stri<<"\t strj="<<strj<<"\n\n\n";
cout<<"*_______*________*______*_______*______*______*"<<endl;
   

    return 0;
}