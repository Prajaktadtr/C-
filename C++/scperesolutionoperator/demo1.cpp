//scope resolution operator
#include<iostream>
#include<iomanip>
using namespace std;
int m=20;
int main()
{
    // int m=20;
    {
        int k=m;
        int m=30;
        cout<<"we are in a inner block\n";
        cout<<"k="<<k<<"\n";
        cout<<"m="<<m<<"\n";
        cout<<"::m="<<::m<<"\n";

    }
    cout<<"\nwe are in outer block\n";
    cout<<"m="<<m<<"\n";
    cout<<"::m="<<::m<<"\n";
    return 0;
}