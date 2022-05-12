// read a number to check it is palindrom or not
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n,num,digit,rev=0;
    cout<<"enter a number";
    cin>>n;
    n=num;
    while(num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    
    }
    if(n==rev)
    {
        cout<<"the no is palindrom";
    }
    else
    cout<<"the no is not palindrom";
    return 0;

}