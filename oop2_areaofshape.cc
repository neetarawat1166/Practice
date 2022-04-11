//area of different shapes
#include<iostream>
using namespace std;
int main()
{
	int length,breath,height,base;
	float radius;
	cout<<"\nEnter the length and breath of rectangle :\n";
	cin>>length>>breath;
	cout<<"\nArea of RECTANGLE :\t"<<length*breath;
	cout<<"\n\nEnter the radius of the circle :\t";
	cin>>radius;
	cout<<"\nArea of the CIRCLE :\t"<<3.14*radius*radius;
	cout<<"\n\nEnter the height and base of the triangle :\n";
	cin>>height>>base;
	cout<<"\nArea of the TRIANGLE :\t"<<0.5*height*base;
	return 0;
}
