// SOP-POP Approach - Arithmetics 
#include <stdio.h>
#include<conio.h>
// global data
int a=5;
int b=7;


void main(int argc, char *argv[])
{
	
	printf("A : %d\tB:%d\n",a,b);
	printf("Addition :%d\n",add());
	printf("Substraction :%d\n",sub());
	printf("Multiplication :%d\n",mul());
	printf("Division:%d\n",div());
}

int add()
{
	return (a+b); 
}

int sub()
{
	return (a-b); 
}
int mul()
{
	return (a*b);
}

int div()
{
	return (a/b);
}
