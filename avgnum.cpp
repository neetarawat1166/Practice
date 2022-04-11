#include<iostream>
using namespace std;

class Average{
	 
	 public:
	 	int n,arr[10],i,sum=0,avg;
	 	
	 	void getdata()
	 	{
	 	   cout<<"\n\nenter how many numbers you want to enter :- ";
		   cin>>n;
		   
		   cout<<"\n\nenter the number :- ";
		   for(i=0;i<n;i++)
		   {
		      cin>>arr[i];
			  sum=sum+arr[i];	
		   }	
		}
		
		void showdata()
		{
			avg=sum/n;
			
			cout<<"\n\nAverage of "<<n<<" numbers are :- "<<avg;
		}
};

int main()
{
	Average a;
	
	a.getdata();
	a.showdata();
	
	return 0;
}
