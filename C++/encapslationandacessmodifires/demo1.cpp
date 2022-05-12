//oop program to read a no and print its reverse, find its digital sum
#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

class digit
{
    private :
    int n, temp;
    public:
    void getdata(int);
    void digireverse();
    int digisum();
};

//defination of member function
void digit :: getdata(int a)
{
    n=a;
    temp=n;
}
void digit :: digireverse()
{
    int rev=0;
    while(n>0)
    {
       rev= n%10;
        // rev=(rev*10)+d;
        n=n/10; //n=n/10
         cout<<rev;
    }
    // cout<<rev;
}

int digit :: digisum()
{
    int sum=0;
    while(temp>0)
    {
        sum+=(temp%10);
        temp/=10;
    }
    return sum;
}

int main()
{
    digit dt;
    int n;
    cout<<"enter any number";
    cin>>n;
    dt.getdata(n);
    dt.digireverse();
    //  dt.digireverse();
    cout<<'\n'<<"digital sum :"<<dt.digisum()<<endl;
    return 0;
}