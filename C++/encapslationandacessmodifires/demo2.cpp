//generate a fibbonoci series for user defined terms
#include<iostream>
#include<iomanip>

using namespace std;

class fibbo
{

    private :
    int ft,st,Tt;
    public :
    //function prototypes
    void getdata(int,int,int);
    void genratefibbo(void);

};
void fibbo::getdata(int a,int b,int c)
{
	ft=a;
	st=b;
	Tt=c;
}
void fibbo:: genratefibbo(void)
{
	cout<<ft<<"  "<<st<<"  ";
	int rt;
	for(int i=3;i<=Tt;i++)
	{
		rt=ft+st;
		cout<<rt<<"  ";
		ft=st;
		st=rt;
	}
}

int main()
{
	fibbo fb;
	int ft,st,Tt;
	cout<<"enter first term :";
	cin>>ft;
	cout<<"enter second term :";
	cin>>st;
	cout<<"enter total terms :";
	cin>>Tt;
	fb.getdata(ft,st,Tt);
	fb.genratefibbo();
	return 0;
}
	