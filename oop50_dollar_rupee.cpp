#include<iostream>
using namespace std;

class dollar
{
	int d;
	public:
		void getdollar()
		{
			cout<<"\ninput dollar :- ";
			cin>>d;
		}
		int cal()
		{
			return d*75;
		}
};
class rupess
{
	int r;
	public:
		rupees()
		{
		}
		
		rupees(dollar d1)
		{
			r=d1.cal();
		}
		
		void put()
		{
			cout<<"rupees = "<<r;
		}
};
int main()
{
	dollar d1,d2;
	rupess r;
	
	d1.getdollar();
	rupess r1,r2;
	r1=d1;
	r.put();
	return 0;
}
