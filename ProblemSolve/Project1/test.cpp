#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	char board[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> board[j][i];
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
			{
				if (board[j][i] == 'F') count++;
			}
		}
	}
	cout << count;
}