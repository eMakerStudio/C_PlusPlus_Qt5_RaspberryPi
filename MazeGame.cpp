#include <iostream>
using namespace std;

void print(char maze[10][9])
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			cout << maze[i][j];
		}

		cout << endl;
	}
}

int main()
{
	char maze[][9] = { { '+', '-', '-', '-', '-', '-', '-', '-', '+' },
	                   { '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|' },
	                   { '|', ' ', '|', ' ', ' ', ' ', '|', ' ', '|' },
	                   { '|', ' ', '+', '-', '-', '-', '+', ' ', '|' },
	                   { '|', '#', '|', ' ', ' ', ' ', ' ', ' ', '|' },
	                   { '|', '-', '+', ' ', '+', ' ', '+', '-', '|' },
	                   { '|', ' ', ' ', ' ', '|', ' ', '|', ' ', '|' },
	                   { '|', ' ', '|', ' ', '+', '-', '+', ' ', '|' },
	                   { '|', '*', '|', ' ', ' ', ' ', ' ', ' ', '|' },
			   { '+', '-', '-', '-', '-', '-', '-', '-', '+' }
			};

	int row = 8;
	int col = 1;

	bool gameOver = false;
	while(!gameOver)
	{
		print(maze);

		char move = ' ';
                cout << "<u>p, <d>own, <l>eft, <r>ight, <q>uit" << endl;
		cout << "Move: ";
		while(move != 'u' && move != 'd' && move != 'l' && move != 'r' && move != 'q')
		{
			cin >> move;
		}

		if (move == 'u')
		{
			if (maze[row - 1][col] == ' ')
			{
				maze[row][col] = ' ';
				row--;
				maze[row][col] = '*';
			}
			else if (maze[row - 1][col] == '#')
			{
				gameOver = true;
                                cout << "Congratulations! You made it!" <<endl;
			}
		}
		else if (move == 'd')
		{
			if (maze[row + 1][col] == ' ')
			{
				maze[row][col] = ' ';
				row++;
				maze[row][col] = '*';
			}
			else if (maze[row + 1][col] == '#')
			{
				gameOver = true;
                                cout << "Congratulations! You made it!" <<endl;
			}
		}
		else if (move == 'l')
		{
			if (maze[row][col - 1] == ' ')
			{
				maze[row][col] = ' ';
				col--;
				maze[row][col] = '*';
			}
			else if (maze[row][col - 1] == '#')
			{
				gameOver = true;
                                cout << "Congratulations! You made it!" <<endl;
			}
		}
		else if (move == 'r')
		{
			if (maze[row][col + 1] == ' ')
			{
				maze[row][col] = ' ';
				col++;
				maze[row][col] = '*';
			}
			else if (maze[row][col + 1] == '#')
			{
				gameOver = true;
                                cout << "Congratulations! You made it!" <<endl;
			}
		}
		else if (move == 'q')
		{
			gameOver = true;
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
	}

	return 0;
}
