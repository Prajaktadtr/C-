//structure oriented program to find facto
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int facto(int);

int main()
{
    int n;
    cout<<"enter a no :";
    cin>>n;
    cout<<"factorial of "<<n<<" = "<<facto(n)<<endl;
return 0;
}
//function for finding factorial
int facto(int n)
{
    int f=1;
    while(n>0)
    {
        f*=n;
        n--;
    }
    return f;
}