// oop to find facto
#include<iostream>
#include<iomanip>

using namespace std;

//define class facto
class Facto
{
	private :
		int n;
	public :
		void getdata(int no)
	{
		n=no;
	}
	void showdata()
	{
		cout<<"n :"<<n<<endl;
	}
	int facto()
	{
		int f=1;
		while(n>0)
		{
			f*=n;
			n--;
		}
		return f;
	}
}; // End of class 




int main()
{
	
	int n;
	cout<<"Enter a no:";
	cin>>n;
	Facto ft;
	ft.getdata(n);
	ft.showdata();
	cout<<"Factorial :"<<n<<" = "<<ft.facto()<<endl;
    return 0;

}
