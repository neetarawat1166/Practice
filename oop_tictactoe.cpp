//tic toe game
#include<iostream>
using namespace std;
char block[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};  //creating a two dimentional array to locate the each block
int row;//determine the rows
int col;//determine thecolumn
char choice='x'; // the player1 will have to enter 'x' when his/her turn will come
bool draw = false;
string player1=" "; 
string player2=" ";
void draw_block() //creating the structure of the tic tac toe
{
	cout<<"\n\n";
	cout<<"\n\n";
	cout<<"\t\t\t\t"<<endl;
	cout<<"\t\t"<<"    |"<<"    |\n";
	cout<<"\t\t"<<block[0][0]<<"   | "<<block[0][1]<<"  | "<<block[0][2]<<endl;//declaraing the number of each block using matrix array
	cout<<"\t\t"<<"____|"<<"____|____\n";
	cout<<"\t\t"<<"    |"<<"    |\n";
	cout<<"\t\t"<<block[1][0]<<"   | "<<block[1][1]<<"  | "<<block[1][2]<<endl;
	cout<<"\t\t"<<"____|"<<"____|____\n";
	cout<<"\t\t"<<"    |"<<"    |\n";
	cout<<"\t\t"<<block[2][0]<<"   | "<<block[2][1]<<"  | "<<block[2][2]<<endl;
	cout<<"\t\t"<<"    |"<<"    |\n";
}
void player_selection() //to determine whose turn it will be
{
	int digit;
	if(choice=='x')
	{
		cout<<player1<<" please enter :- ";//if palyer has to enter 'x' so he/she will be playerr1 and vise versa
		cin>>digit;
	}
    if(choice=='0')
	{
		
		cout<<player2<<" please enter :- ";
		cin>>digit;
	}
	
	if(digit==1) //to determine the block specified by the player with the help of digit entered by her/him
	{
		row=0;
		col=0;
	}
	if(digit==2)
	{
		row=0;
		col=1;
	}
	if(digit==3)
	{
		row=0;
		col=2;
	}
	if(digit==4)
	{
		row=1;
		col=0;
	}
	if(digit==5)
	{
		row=1;
		col=1;
	}
	if(digit==6)
	{
		row=1;
		col=2;
	}
	if(digit==7)
	{
		row=2;
		col=0;
	}
	if(digit==8)
	{
		row=2;
		col=1;
	}
	if(digit==9)
	{
		row=2;
		col=2;
	}
	else if(digit<1 || digit>9)//if the digit do not match ....this msg will appear
	cout<<"\ninvalid!!\n";
	if(choice=='x' && block[row][col]!='x'&& block[row][col]!='0')//when it is player1 and the block is empty
	{
	block[row][col]='x';
	choice='0';
    }
    else if(choice=='0' && block[row][col]!='x'&& block[row][col]!='0')//when it is player2 and block is empty
	{
	block[row][col]='0';
	choice='x';
    }
    else
    {
    cout<<"\n\nthere is no empty space left!!"<<endl;//when the block is filled by either 'x' or '0'
    player_selection();
	}
    
}

bool check()//to check the win or draw conditon
{
	int i,j;
	for(i=0;i<3;i++)
	{
		if(block[i][0]==block[i][1]&&block[i][0]==block[i][2]||block[0][i]==block[1][i]&&block[0][i]==block[2][i])
		return true;//when player wins by making a match of horizontal or vertical
	}
		if(block[0][0]==block[1][1]&&block[1][1]==block[2][2]||block[0][2]==block[1][1]&&block[1][1]==block[2][0])
		return true;//player wins by making matching diagonal
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(block[i][j]!='x'&&block[i][j]!='0')
			return false;//when no diagonal,horizontal and vertical block matches....match is considered draw
		}
	}
	draw=true;
	return false;
}
int main()
{
	cout<<"\n\n";
	//entering the names of players......
	cout<<"\nenter the name of player1 :- ";
	getline(cin,player1);
	cout<<"\nenter the name of player2 :- ";
	getline(cin,player2);
//calling the function one by one.......
	while(!check())
	{
		draw_block();
		player_selection();
		check();
	}
	if(choice=='x'&&draw==false)//declaraing the winner......
	cout<<"\n"<<player2<<" wins....\n";
	else if(choice=='0'&&draw==false)
	cout<<"\n"<<player1<<" wins....\n";
	else
	cout<<"\nthe match is draw!!"<<endl;
}
