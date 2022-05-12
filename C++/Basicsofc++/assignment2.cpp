// read a no and chek prime or not
#include<iostream>
#include<iomanip>

using namespace std;

/*int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int i,flag=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"no is not prime"<<endl;
            break;
        }
        flag=1;
        if(flag==0)
        {
            cout<<"no is prime"<<endl;
        }
    }
    return 0;
}*/

int main() {

  int i, n;
  bool flag= 1;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    flag = 0;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) 
    {
      flag = 0;
      break;
    }
  }

  if (flag)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}