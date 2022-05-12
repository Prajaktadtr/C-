// demonstration on static data and static member function in cpp
#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class Bank
{
    private:
    int Acno;
    char Aname[400];
    int Amtbal;
    static long int Bbal;


    public:
    Bank()
    {

    }
    Bank(int ac,char an[],int amt)
    {
    Acno=ac;
    strcpy(Aname,an);
    Amtbal=amt;
    Bbal=+amt;
    }

    void display()
    {
        cout<<"Ac no:"<<Acno<<"Ac Name :"<<Aname<<"Amount Balance"<<Amtbal;

    }
    static void displaybankbal()
{
    cout<<"total bank balance :"<<Bbal<<endl;
}
void deposit(int damt)
{
    Amtbal+=damt;
    Bbal+=damt;

}
void withdraw(int wamt)
{
if(wamt<Amtbal)
{
    Amtbal-=wamt;
    Bbal-=wamt;
}
else
{
    cout<<"insufficient balance :"<<endl;
}
}

};
long int Bank::Bbal=0L;
int main()
{
    Bank b1=Bank(100,"siya",5000);
    Bank b2=Bank(101,"sanya",100000);
    Bank b3=Bank(103,"shiv",10000000);
    cout<<"details of siya account"<<endl;
    b1.display();
    cout<<"details of sanya account"<<endl;
    b2.display();
    cout<<"details of shiv account"<<endl;
    b3.display();

    Bank::displaybankbal();
    cout<<"siya enter amount to deposite"<<endl;
    int damt;
    cin>>damt;
    b1.deposit(damt);
    cout<<"details of siya account:"<<endl;
    b2.display();
    Bank :: displaybankbal();
    cout<<"sanya enter amount to withdraw :"<<endl;
    int amtw;
    cin>>amtw;
    b3.withdraw(amtw);
    cout<<"details of shiv account :"<<endl;
    b3.display();
    Bank::displaybankbal();
    return 0;



}