 #include<iostream>
 using namespace std;
 class customer{
    private:
    string name;
    const string Aadharcard;
    string address;
    string phno;
    public:
    void Display()
    {       cout<<":customer details"<<endl;
            cout<<"Your Aadhar Code:"<<Aadharcard<<endl;
            cout<<"Your Name:"<<name<<endl;
            cout<<"ph no is :"<<phno<<endl;
            cout<<"Address is  :"<<address<<endl;
    }
        customer(string name,string aadhar,string add,string pno)
        {
            this->name=name;
            Aadharcard=aadhar;  
            address=add;
            phno=pno;

        }

 };
 class bank
 {
 public:
 int accno;
 double person;
 void withdraw(double);
 void deposit(double);
 void displaybank();
 };
 
 bank::withdraw()
 {

 }
 
 bank::deposit()
 {

 }

 bank::displaybank()
 {

 }

class CurrentAcc
{
public:
double minBal;
double chargeInterest;

};

CurrentAcc:: ()
{
}

CurrentAcc::()
{
}

 
 int main(){
     
     return 0;
 }