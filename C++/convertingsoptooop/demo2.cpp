//read name and print it for 20 times 
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class printmulti
{
    private:
    char nm[20];
    public:
    void getdata(char unm[])
    {
        strcpy(nm,unm);
    }
    void printname()
    {
        for(int i=1;i<=20;i++)
        cout<<i<<"   "<<nm<<endl;
    }
};


int main()
{
    char nm[20];
    cout<<"enter name:";
    cin>>nm;
    printmulti pm;
    pm.getdata(nm);
    pm.printname();
    
}
