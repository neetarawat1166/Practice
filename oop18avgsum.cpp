//Sum and Average of 10 given numbersce
#include<iostream>
using namespace std;
int main()
{
	int  n,sum=0,avg,i;
	cout<<"\nenter the marks given 10 subjects :- ";
	for(i=1;i<=10;i++)
	{
		cin>>n;
		sum=sum+n;
	}
	avg=sum/10;
	cout<<"\nsum of given 10 numbers are :- "<<sum;
	cout<<"\naverage of given numbers are :- "<<avg;
	return 0;
}
