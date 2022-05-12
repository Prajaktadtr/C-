// read a no to find 10 multiples of it
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<"ten multiple of a number <<n"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
    }
}