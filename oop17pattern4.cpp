/*pattern
1
22
333
4444
*/

#include<iostream> 
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
			cout<<i;
		}
		cout<<"\n";
	}
	return 0;
}
