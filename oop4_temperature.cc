//temperature converter
#include<iostream>
using namespace std;
int main()
{
	float celsius,fahrenheit;
	cout<<"\n***CELCIUS TO FAHRENHEIT***";
	cout<<"\nEnter Temperature celsius :\t";
	cin>>celsius;
	cout<<"FAHRENHEIT = "<<(1.8*celsius)+32<<"F";
	cout<<"\n\n***FAHRENHEIT TO CELCIUS***";
	cout<<"\nEnter Temperature FAHRENHEIT :\t";
	cin>>fahrenheit;
	cout<<"CELCIUS = "<<(fahrenheit-32)*0.55<<"C";
	return 0;
	
}
