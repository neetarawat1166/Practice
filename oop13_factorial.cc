//factorial of a number
#include<iostream>
using namespace std;
int main()
{
	  double int fact=1,i,n;
	cout<<"\nenter the number whose factorial is to be calculated :- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial = "<<fact;
	return 0;
}
