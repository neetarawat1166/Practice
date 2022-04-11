//Write a CPP program that takes a year from user and print whether that year is a leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int i,year;
	cout<<"\nenter the year\n";
	cin>>year;
	if( year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
			cout<<year<<" is a leap year";
		    }
			
			else
		    cout<<year<<" is not a leap year";
		}
		cout<<year<<" is a leap year";
	}
	else
		cout<<year<<" is not a leap year";
	return 0;
}
