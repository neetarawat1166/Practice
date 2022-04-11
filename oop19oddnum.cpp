//enter 10 numbers and find all odd numbers from an array.
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[20];
	cout<<"\nenter the value of n :- ";
	cin>>n;
	cout<<"\nenter the marks of "<<n<<" numbers : "<<endl;
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	cout<<"\n";
    }
    cout<<"\nodd number from given numbers are:- ";
    for(i=1;i<=n;i++)
    {
    if(a[i]%2!=0)
	cout<<a[i];
	cout<<"\n";
    }
    return 0;
}
