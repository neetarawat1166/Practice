#include<iostream>
using namespace std;

class staff
{
  private:
  int salary,staff_id;
  char name[10],department[20],designation[30];
  
  public:
  void getdata();
  void display();
  void sort();	

};

void staff ::getdata()
{
		cout<<"\n\nNAME :- ";
		cin>>name;
		cout<<"\n\nSTAFF ID :- ";
		cin>>staff_id;
		cout<<"\n\nDESIGNATION:- ";
		cin>>designation;
		cout<<"\n\nDEPARTMENT :- Computer Science";
		cout<<"\n\nSALARY :- ";
		cin>>salary;
	
}

void staff ::display()
{
	
		cout<<"\nNAME :- "<<name;
		
		cout<<"\n\nSTAFF ID :- "<<staff_id;
		
		cout<<"\n\nDEPARTMENT :- Computer Science";
		
		cout<<"\n\nDESIGNATION:- "<<designation;
	
		cout<<"\n\nSALARY :- "<<salary;
		
	
}

void staff ::sort()
{
	staff temp;
        for(int i=0;i<; i++)
        {
            for(int j=i+1; j<n; j++)
                {
                    int r = strcmp(s[i].name,s[j].name);
                    if(r>0)
                    {
                        temp=s[i];
                        s[i]=s[j];
                        s[j]=temp;
                    }
                }
        }
}

const int size=2;

int main()
{
	int i;
  	staff s[size];
  	
  	for(i=0;i<size;i++)
  	{
  		cout<<"\n\n";
  		cout<<i+1;
  	  	s[i].getdata();
	}
	cout<<"===================================================================================================================="<<endl;
	
	for(i=0;i<size;i++)
  	{
  		cout<<"\n\n";
  		cout<<i+1;
  	  	s[i].display();
	}
	
	for(i=0;i<size;i++)
  	{
  		cout<<"\n\n";
  		cout<<i+1;
  	  	s[i].sort();
	}
}
