#include <iostream>
using namespace std;

	char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	void box();
	int win();
	void fill();
	int player = 1,i, num;


int main()
{	
	box();
	fill();

}

//   This function fill the box with 'X' or 'O'

void fill()
{
	do
	{
		A:
	    cout << "\nPlayer " << player << " Enter a number: ";
		cin >> num;	
		char sign = ( player == 1) ? 'X' : 'O';
		
		if (( num == 1 ) &&  (square[1] == '1'))
		{
			square[1] = sign;
		}
		else if (( num == 2 ) &&  (square[2] == '2'))
		{
			square[2] = sign;
		}
		else if (( num == 3 ) &&  (square[3] == '3'))
		{
			square[3] = sign;
		}
		else if(( num == 4 ) &&  (square[4] == '4'))
		{
			square[4] = sign;
		}
		else if(( num == 5 ) &&  (square[5] == '5'))
		{
			square[5] = sign;
		}
		else if (( num == 6 ) &&  (square[6] == '6'))
		{
			square[6] = sign;
		}
		else if (( num == 7 ) &&  (square[7] == '7'))
		{
			square[7] = sign;
		}
		else if(( num == 8 ) &&  (square[8] == '8'))
		{
			square[8] = sign;
		}
		else if(( num == 9 ) &&  (square[9] == '9'))
		{
			square[9] = sign;
		}
		else 
		{
			cout << "Invalid move\n";
			goto A;	
		}
		box();
	    i = win();
	    if ( i == 1 )
	    {
	    	cout << "\n   Player "<< player << " wins!";
	    	break;
		}
		else if ( i == 0 )
		{
			cout << "\nGame Draw";
		}
	    if( player == 1)
	    {
	    	player++;
		}
		else 
		player--;
} while ( i !=0);
}

   /**********************************
    return 1 when one player wins the game
    return 0 when game ends and draw
    return -1 when nothing happens
    **********************************/
int win()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    if (square[1] != '1' && square[2] != '2' && square[3] != '3'  && square[4] != '4' && square[5] != '5' && square[6] != '6'  && square[7] != '7' && square[8] != '8' && square[9] != '9')
    
        return 0;
    else
        return -1;
}

/*****************************************
Function to draw board of Tic toc toe 
******************************************/
 
void box ()
{
	system("cls");
	cout << "\n\n   Tic tok toe   "<<endl
	     << "\n    Player A  -  Player B  \n\n";
	cout << "      |       |       "<< endl
	    <<  "   "<< square[1]<<"  |   "<<square[2]<<"   |    "<<square[3]<<"  "<< endl
	    <<  "______|_______|_______"<< endl
        <<  "      |       |       "<< endl 
         <<  "   "<< square[4]<<"  |   "<<square[5]<<"   |    "<<square[6]<<"  "<< endl
        <<  "______|_______|_______"<< endl
        <<  "      |       |       "<< endl
        <<  "   "<< square[7]<<"  |   "<<square[8]<<"   |    "<<square[9]<<"  "<< endl
        <<  "      |       |      " << endl;
}
