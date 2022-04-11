#include<iostream> //pattern
using namespace std;
int main()
{
	int i,j,n,k;
	int num=1;
	cout<<"\nenter the value of n:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<num;
			num=num+1;
		}
		cout<<"\n";
	}
	return 0;
}
