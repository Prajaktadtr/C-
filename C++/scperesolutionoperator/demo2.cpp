//scope resolution operator -arith
#include<iostream>
#include<iomanip>

using namespace std;

class arith
{
    private:
    int a,b;
    public:
    //declaration member function prototype
    void getdata(int ,int);
    void showdata(void);
    int add();
    int sub();
    int multi();
    int div();

};//end of class

void arith :: getdata(int x, int y)//defination
{
    a=x;
    b=y;
}
void arith :: showdata(void)
{
    cout<<"A:"<<a<<"B :"<<b<<endl;
}

int arith ::add()
{
        return a+b;   
}

int arith ::sub()
{
    return a-b;
}

int arith :: multi()
{
    return a*b;
}

int arith :: div()
{
    return a/b;
}

int main()
{
    int a,b;
    cout<<"enter first no";
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    arith at; //at becomes of an object of arith
    at.getdata(a,b);
    at.showdata();
    cout<<"addition:"<<at.add()<<endl;
    cout<<"substaction:"<<at.sub()<<endl;
    cout<<"multiplicarion:"<<at.multi()<<endl;
    cout<<"division:"<<at.div()<<endl;
// arith ab;
// ab.getdata(a,b);
//     ab.showdata();
//     cout<<"addition:"<<ab.add()<<endl;
//     cout<<"substaction:"<<ab.sub()<<endl;
//     cout<<"multiplicarion:"<<ab.multi()<<endl;
//     cout<<"division:"<<ab.div()<<endl;
    return 0;
}