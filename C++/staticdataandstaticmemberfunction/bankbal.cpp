#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Bank
{
    private:
        int Acno;
        char Aname[10];
        int AmtBal;
        static long int Bbal;
    public:
        Bank(){}
        Bank(int ac,char an[],int amt)
        {
            Acno=ac;
            strcpy(Aname,an);
            AmtBal=amt;
            Bbal+=amt;
        }
        void Display()
        {
            cout<<" Ac No : "<<Acno<<" Ac Name : "<<Aname<<" Amount Balance: "<<AmtBal<<endl;
        }
        void deposit(int damt)
        {
            AmtBal+=damt;
            Bbal+=damt;
        }
        void withdraw(int wamt)
        {
            if(wamt<AmtBal)
            {
                AmtBal-=wamt;
                Bbal-=wamt;
            }else
            {
                cout<<"Insuffient Balance :"<<endl;
            }
        }
        static void displayBankBal()
        {
            cout<<"Total Bank Balance : "<<Bbal<<endl;
        }
};
long int Bank::Bbal=0L;
int main()
{
    Bank b1=Bank(100,"siya",5000);
    Bank b2=Bank(101,"sanya",10000);
    Bank b3=Bank(102,"shiv",8000);
    cout<<"Details of siya Account"<<endl;
    b1.Display();
    cout<<"Details of sanya Account"<<endl;
    b2.Display();
    cout<<"Details of shiv Account"<<endl;
    b3.Display();
    Bank::displayBankBal();
    cout<<"siya Emter Amount to diposit: "<<endl;
    int amt;
    cin>>amt;
    b1.deposit(amt);
    cout<<"Detail of siya Account :"<<endl;
    b1.Display();
    Bank::displayBankBal();
    cout<<"sanya Emter Amount to diposit: "<<endl;
    int amtd;
    cin>>amtd;
    b2.deposit(amtd);
    cout<<"Detail of sanya Account :"<<endl;
    b2.Display();
    Bank::displayBankBal();
    cout<<"shiv Emter Amount to Withdrow: "<<endl;
    int amtw;
    cin>>amtw;
    b3.withdraw(amtw);
    cout<<"Detail of shiv Account :"<<endl;
    b3.Display();
    Bank::displayBankBal();

    return 0;
}