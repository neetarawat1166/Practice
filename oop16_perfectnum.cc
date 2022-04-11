//WAP in C++ for Perfect Number
#include<iostream>
using namespace std;
int main()
{  
        long int i,n,sum=0;
	    cout<<"\nenter the number :- ";
	    cin>>n;
	    for(i=1;i<n;i++)
	    {
	    	if(n%i==0)
	    	{
	    	cout<<i<<"\t";
	    	sum=sum+i;
	        }
		}
		if(sum==n)
		cout<<"\n"<<n<<" is a perfect number";
		else
		cout<<"\n"<<n<<" is not a perfect number";
		return 0;
}
