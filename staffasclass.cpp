#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;

class staff
{
    static int id;
    int staff_id;
    char name[50];
    char desig[100];
    int salary;
    static char department[100];
    int ts_astn, ts_asct, ts_pr, ts_pe;
    public:
    staff()
    {
        ts_asct=0;
        ts_astn=0;
        ts_pr=0;
        ts_pe=0;
    }
    void set_data();
  void display();
  void sort( staff * , int);
  void total_salary(int, staff * );
};
int staff::id=1000;
char staff::department[]="Computer Science";
void staff::set_data() {
    staff_id=id++;
  cout << "Enter Name:";
  cin >> name;
  cout << "Enter designation(Assistant professor/ Associate Professor/ Programmer/ Peon)): ";
  cin >> desig;
  cout << "Salary: ";
  cin >> salary;

}
void staff::display() {
  cout << staff_id << "\t" << name << "\t" << department << "\t" << desig << "\t" << salary<<"\n";
}
void staff::sort(staff * s, int n) {
    staff stf;
    int i, j;
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
        int r = strcmp(s[i].name, s[j].name);
        if (r > 0) {
          stf = s[i];
          s[i] = s[j];
          s[j] = stf;
        }
      }
    }
}

    void staff::total_salary(int n, staff x[]) {
      int i;
      for (i = 0; i < n; i++) {
        if (strcmp(x[i].desig, "Assistant professor") == 0) {
          ts_astn = ts_astn + x[i].salary;
        }
        if (strcmp(x[i].desig, "Associate professor") == 0) {
          ts_asct = ts_asct + x[i].salary;
        }
        if (strcmp(x[i].desig, "Programmer") == 0) {
          ts_pr = ts_pr + x[i].salary;
        }
        if (strcmp(x[i].desig, "Peon") == 0) {
          ts_pe = ts_pe + x[i].salary;
        }
      }
      cout << "total sum of salary of Assistant professor:" << ts_astn << endl;
          cout << "total sum of salary of Professor:" << ts_asct << endl;
          cout << "total sum of salary of Peon:" << ts_pr<< endl;
          cout << "total sum of salary of Peon:" << ts_pe<< endl;
    }
	
    int main() {
      int ch;
      int n;
      cout << "\n Enter No.of Records You Want : ";
      cin >> n;
      staff s[n];
      do {
        cout << "\n 1. Accept Data ";
        cout << "\n 2. Display Data ";
        cout << "\n 3. Sort Data by Name ";
        cout << "\n 4. Sum of salary department-wise ";
        cout << "\n 5. Exit: ";
        cout << "\n\n Enter Your Choice : ";
        cin >> ch;
        int i;
        switch (ch) {
        case 1:
          for (i = 0; i < n; i++) {
            cout << "\n\n Enter Data for Employee " << i + 1 << "\n";
            s[i].set_data();
          }
          break;
        case 2:
          for (i = 0; i < n; i++) {
            s[i].display();
          }
          break;
        case 3:
          s[0].sort( s, n); 
          cout << "\n Data is Sorted!!!\n";
          break;
        case 4:
          s[0].total_salary(n, s);
        case 5:
          exit(0);
        default:

          cout << "\n Invalid Choice . . .";
        }
   }      
      while (ch != 4);
      return 0;
    }
