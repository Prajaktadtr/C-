//structure oriented program to read a name and print for 20 times
#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
void printname(char []);

int main()
{
    char nm[20];
    cout<<"enter name";
    cin>>nm;
    cout<<"print name for 20 times"<<endl;
    printname(nm);
    return 0;
}

void printname(char nm[20])
{
    for(int i=1;i<=20;i++)
    {
        cout<<i<<"   "<<nm<<endl;
    }
}