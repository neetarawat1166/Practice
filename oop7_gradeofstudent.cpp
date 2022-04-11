//grades of student........

#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
int  i;
float marks[10], per=0, total=0;


cout<<"Enter marks of "<<"5"<<" subject: ";
for(i=0; i<=5; i++)
{
cin>>marks[i];
}
for(i=0; i<=5; i++)
{
total=total+marks[i];
}
per=total/5;
cout<<"Percentage: "<<per<<" %" <<endl;


if(per>85) {
cout<<"A grade";
}
else if(per<85 && per>=75) 
{
cout<<"B grade";
}
else if(per<75 && per>=50)
{
cout<<"C grade";
}
else if(per<50 && per>=30) 
{
cout<<"D grade";
}
else 
{
cout<<"Fail";
}
return 0;
}
