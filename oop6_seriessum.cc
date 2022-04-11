//sum of series 1+3+5+7........n
#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	cout<<"\nEnter the value of n :\t";
	cin>>n;
	for(i=1;i<=n;)
	{
		sum=sum+i;
		i=i+2;
		
	}
	cout<<"SUM OF THE SERIES IS :\t"<<sum;
	return 0;	
}
