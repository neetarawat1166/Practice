#include<iostream>
using namespace std;
class Date
{
      int day;
      int month;
      int year;
      public:
             Date(int d,int m,int y)
             {
                   day=d;
                   month=m;
                   year=y;
             }
             
             friend int operator-(Date &,int);
             friend int operator+(Date &,int);
             void display()
             {
                  cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
             }
};
int operator-(Date &x,int y)
{
     return x.day-y;
}
int operator+(Date &y,int z)
{
     return y.day-z;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yy;
    
    Date d1(dd,mm,yy);
    Date d2=d1-1;
    d1.display();
    Date d3=d1+1;
    d1.display();
    return 0;
}
