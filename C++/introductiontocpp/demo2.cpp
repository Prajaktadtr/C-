// OOP -Code - Arithmetics 

#include <iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
class Arith
{
	private :
	int a,b; // No accesibility directly
	public :
	void getdata()
	{
		cout<<"Enter values of a:";
		cin>>a;
		cout<<"Enter values of b:";
		cin>>b;
	}
	void showdata()
	{
		cout<<"A :"<<a<<"B :"<<b<<endl;
	}
	int add()
	{
		return a+b;
	}
	int sub()
	{
		return a-b;
	}
	int mul()
	{
		return a*b;
	}
	int div()
	{
		return a/b;
	}
}; // End of class 


int main()
{

	Arith at; // at becomes an object of Arith class - user defined type
	at.getdata();
	at.showdata();
	cout<<"Addition :"<<at.add()<<endl;
	cout<<"Substraction :"<<at.sub()<<endl;
	cout<<"Multiplication :"<<at.mul()<<endl;
	cout<<"Division:"<<at.div()<<endl;
    return 0;
	
}
