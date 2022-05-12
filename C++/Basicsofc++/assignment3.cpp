// print all even no in the range of 0 to 100 and find their sum
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
int n,sum=0;
cout<<"\neven no between 0 to 100"<<"="<<endl;
for(n=1;n<=100;n++)
{
    if(n%2==0)
    {
        cout<<n<<" ";//cout << number << " ";
        sum=sum+n;
    }
}
cout<<"\nsum of all even no from 0 to 100 is"<<" = " <<sum;
return 0;
}