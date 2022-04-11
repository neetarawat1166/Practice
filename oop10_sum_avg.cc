//Write a program in CPP to input 5 numbers from keyboard and find their sum and average
#include<iostream>
using namespace std;
int main()
{
	int sum=0,avg,i,n;
	cout<<"\nEnter the five numbers :\n\n";
	for(i=1;i<=5;i++)
	{
		cin>>n;
		sum=sum+n;
	}
	avg=sum/5;
	cout<<"\nSum of 5 numbers are :\t"<<sum;
	cout<<"\n\nAVERAGE of the sum is :\t"<<avg;
	return 0;
}
