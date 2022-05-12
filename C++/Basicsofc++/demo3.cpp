// write to create user defined function for finding factorial of a number
#include<iostream>
#include<iomanip>
int facto(int);
using namespace std;

int main()
{
    int n;
    cout<<"enter a number to find factorial"<<endl;
    cin>>n;
    cout<<"factorial of<<n<<"<<facto(n)<<endl;
    return 0;

}
int facto(int n)
{
    int f=1;
    while(n>0)
    {
        f*=n; //f=f*n
        n--;
    }
    return f;
}