/*pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"\nenter the value of n :- ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(k=n;k>i;k--)
		cout<<" ";
		int j=1;
		while(j<=2*i-1)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
	}
	return 0;
}
