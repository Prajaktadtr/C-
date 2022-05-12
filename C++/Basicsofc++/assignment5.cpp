// read any four no to determine the greatest
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cout<<"enter first no";
    cin>>n1;
    cout<<"enter second no";
    cin>>n2;
    cout<<"enter third no";
    cin>>n3;
    cout<<"enter fourth no";
    cin>>n4;
    if(n1>n2 && n1>n3 && n1>n4)
    {
        cout<<"first no is greatest"<<n1;
    }
     else if(n2>n1 && n2>n3 && n2>n4)
    {
        cout<<"second no is greatest"<<n2;
    }
    else if(n3>n1 && n3>n2 && n3>n4)
    {
        cout<<"third no is greatest"<<n3;
    }
    else
    {
    cout<<"fourth no is greatest"<<n4;
    }
    return 0;
}