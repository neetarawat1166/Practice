//oddand even
#include<iostream>
using namespace std;
int main()
{
	int i,odd,even;
	cout<<"\nTO FIND ODD AND EVEN NUMBERS FROM 1 TO 1000";
	for(i=1;i<=1000;i++)
	{
		if(i%2==0)
		{
		  cout<<"\nEVEN NUMBER:\t"<<i;
		}
		
	}
	cout<<"\n\n";
	for(i=1;i<=1000;i++)
	{
		if(i%2!=0)
		{
		  cout<<"\nODD NUMBER:\t"<<i;
		}
		
	}
	return 0;
}
