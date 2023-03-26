#include <iostream>

using namespace std;

int main()
{
	string s;
	int iarr[5];
	char arr[5][15];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = ' ';
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		iarr[i] = s.size();
		for (int j = 0; j < s.size(); j++)
		{
			arr[i][j] = s[j];
		}
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] == ' ') continue;
			cout << arr[j][i];
		}
	}
}