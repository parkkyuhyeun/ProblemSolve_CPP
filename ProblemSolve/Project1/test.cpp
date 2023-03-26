#include <iostream>

using namespace std;

int main()
{
	int arr[9][9], max = 0, pos[2];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[j][i];
			if (max < arr[j][i])
			{
				max = arr[j][i];
				pos[0] = i;
				pos[1] = j;
			}
		}
	}
	cout << max << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << pos[i]+1 << " ";
	}
}