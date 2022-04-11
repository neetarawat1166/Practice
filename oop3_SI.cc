//simple interest
#include<iostream>
using namespace std;
int main()
{
	int principle,time;
	float rate,SI;
	cout<<"\nEnter the principle,time and rate :\n";
	cin>>principle>>time>>rate;
	SI=(principle*time*rate)/100;
	cout<<"\n\nSimple Interest is :\t"<<SI;
	return 0;
}
