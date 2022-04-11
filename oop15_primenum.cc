//WAP in C++ for Prime Number
#include<iostream>
using namespace std;
int main()
{
	int num,i,m=0;
	cout<<"\nenter the number :- ";
	cin>>num;
	m=num/2;
	for(i=2;i<=m;i++)
	{
		if(num%i==0)
		{
			cout<<num<<" is not a prime number";
			m++;
			
		}
		else 
		{
			cout<<num<<" is a prime number";
		
		}
	}
     return 0;
}
