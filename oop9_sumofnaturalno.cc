// Write a program in CPP to display n terms of natural numbers and their sum.
#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	cout<<"\n\nEnter the value of n :\t";
	cin>>n;
	cout<<"\n\nList of natural number are :\n\n";
	for(i=1;i<=n;i++)
	{
		cout<<i;
		cout<<"\t";
		sum=sum+i;
	}
	cout<<"\n\nSum of these "<<n<<" natural numbers are :\t"<<sum;
	return 0;
	
}
