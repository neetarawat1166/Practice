//WAP in C++ for Armstrong Number
#include<iostream>
using namespace std;
int main()
{
	int num,i,n,sum=0,rem;
	cout<<"\nenter the number :- ";
	cin>>num;
	n=num;
	for(i=1;i<=n;i++)
	{
	  rem=num%10;
	  sum=sum+(rem*rem*rem);
	  num=num/10;	
	}
	if(sum==n)
	{
		cout<<n<<" is a armstrong number";
	}
	else
	{
		cout<<n<<" is not an armstrong number";
	}
}
