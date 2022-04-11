// C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>
 
using namespace std;
 
// Class to implement operator overloading
// function for concatenating the strings
class AddString 
{
 
     string str1,str2;
     
     public:
     	void input()
     	{
     	  cout <<"  Enter the first string: ";  
          cin >> str1; // take string  
          cout << "  Enter the second string: ";  
          cin >> str2;	
		}
		
        void concat()
        {  
	      string result;
		  
		  result=str1+str2; 
     	   
          cout << " \n\nThe Concatenation of the string: " <<result;  
	    }
        
        void stcopy()
        {
           cout<<"\n\n\nafter copying one string to anotherr :-\n\n ";
           str2=str1;
		   cout<<"\n\nThe contents of str2 are: "<<str2;
	
		}
    
        void compare()
        {
        	 cout<<"\n\ncomparing the string :\n";
            if ( str1 == str2)  
            {  
              cout << " String is equal." << endl;  
            }  
            else  
            {  
              cout << " String is not equal." << endl;  
            }  
		}
};
 
// Driver Code
int main()
{
    AddString s;
    
    s.input();
    s.concat();
    s.stcopy();
    s.compare();
    return 0;
}
