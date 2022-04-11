// Write a program in CPP to display the multiplication table of a given integer
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"\nEnter the integer whose table you want to display :\t";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<i*n<<endl;
	}
	return 0;
}
