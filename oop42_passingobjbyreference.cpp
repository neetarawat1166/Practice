//passing object by reference

#include<iostream>
using namespace std;
class Tourist
{
  int id;
  char name[30];
  float amount;
  public:
  void get_input(void);
  friend void modify(Tourist&,float);
  void display(void);
};
void Tourist::get_input()
{
  cout<<"ENTER TOURIST ID : ";
  cin>>id;
  cout<<"ENTER NAME : ";
  cin>>name;
  cout<<"ENTER AMOUNT PAID : ";
  cin>>amount;
}
void Tourist::display()
{
  cout<<"\nTOURIST ID : "<<id;
  cout<<"\nTOURIST NAME : "<<name;
  cout<<"\nAMOUNT PAID : "<<amount;
}
void modify(Tourist &t,float new_amt)
{
  t.amount=new_amt;
  cout<<"\tNEW AMOUNT FOR TOURIST "<<t.id<<" IS : "<<t.amount;
}
int main()
{
  float amt;
  Tourist t1;
  t1.get_input();
  cout<<"\n\n--BEFORE MODIFICATION--";
  t1.display();
  cout<<"\n\n\tENTER THE NEW AMOUNT : ";
  cin>>amt;
  modify(t1,amt);
  cout<<"\n\n\n--AFTER MODIFICATION--";
  t1.display();
}\
