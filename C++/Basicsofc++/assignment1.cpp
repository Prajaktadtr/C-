// read name age to chek voting eligiblity
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char nm[20];
    cout<<"enter name:"<<endl;
    cin>>nm;
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    cout<<"name is"<<nm<<"age is"<<age<<endl;
    if(age>=18)
    {
        cout<<" is eligible for voting"<<nm <<endl;
    }
    else
    {
        cout<<"<<\t <<nm is not eligible for voting"<<nm<<endl;
    }
    return 0; 
}