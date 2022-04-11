
 #include <iostream>
    using namespace std;
    class matrix
    {
        int a[10][10],x,y,i,j;
        public :
            void values();
            void display();
            
    };
    void matrix::values()
    {
        cout << "Enter the rows   "; cin >> x;
        cout << "Enter the columns   "; cin >> y;
        cout << "Enter elements of matrix\n\n";
        for (i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                cin >> a[i][j];
            }
        }
        
    }
    
    void matrix :: display()
    {
    	cout<<"\n\nMatrix formed is :-\n";
    	
    	for (i=1; i<=x; i++)
        {
        	cout<<"\n";
            for ( j=1; j<=y; j++)
            {
                cout<<a[i][j]<<"\t";
            }
        }
    	
	}
    
    int main()
    {
        
        matrix m;
        m.values();
        m.display();
    return 0;
    }
