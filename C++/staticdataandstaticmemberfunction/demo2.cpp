//demonstrating static data , static member function using bank balance

#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>

using namespace std;

class Bank
{
    private:
    int Acno;
    char Aname[20];
    int AmtBal; //this is for bank balance communication for all depositors
static long int Bbal;
    public:
    Bank(){}//default constructor
    //parameterized constructor defined
// int Bankbal=0;
    Bank(int ac,char an[],int amt)
    
    {
    //   static int Bbal=0;
        Acno=ac;
        strcpy(Aname,an);
        AmtBal=amt;
        Bbal+=amt;
    }
    static void Bankbal()
        {
            cout<<"Total bank balance:"<<Bankbal<<endl;
        }
    //member function for processing individual accounts
    void displaybal()
    {
        cout<<"Ac. no"<<Acno<<"Name"<<Aname<<"amount balance"<<AmtBal<<endl;

    }

    void deposite(int damt)
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

        }
        else
        cout<<"insufficeient balence:"<<endl;
    }


    //      static void Bankbal()
    //  {
    //          cout<<"Total bank balance:"<<Bankbal<<endl;
    //  }
    
};
 long int Bank::Bbal=0L; //initialize static data to 0

int main()
{
    //create three objects
    Bank obj1=Bank(100,"siya",5000);
    Bank obj2=Bank(101,"Ram",10000);
    Bank obj3=Bank(103,"chinu",8000);

    //disply details of all depositors and bank balance
    cout<<"details of siya account"<<endl;
    obj1.displaybal();
    cout<<"details of ram account"<<endl;
    obj2.displaybal();
    cout<<"details of chinu account"<<endl;
    obj3.displaybal();

    Bank::Bankbal(); //total bank balance
    
    cout<<"siya enter amount to deposite";
    int amt;
    cin>>amt;

    obj1.deposite(amt);
    cout<<"details of siya account"<<endl;
    obj1.displaybal();
    Bank::Bankbal();
    //total bank balance

    cout<<"chinu enter amount to deposite";
    int amtd;
    cin>>amtd;
    obj3.deposite(amtd);

    cout<<"details of chinu account"<<endl;
    obj3.displaybal();

    Bank::Bankbal();
    //total bank balance

    cout<<"ram enter amount to  withdraw";
    int amtw;
    cin>>amtw;
    obj2.withdraw(amtw);
    cout<<"details of Ram's acount"<<endl;
    obj2.displaybal();
    Bank :: Bankbal();
    //total bank balance
    return 0;

}
