#include <iostream>
using namespace std;

int main()
{
	int n;
	int* array = new int[30];
	for (int i = 0; i < 30; i++)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		for (int i = 0; i < 30; i++)
		{
			if (array[i] == n) { array[i] = 0; }
		}
	}
	for (int i = 0; i < 30; i++)
	{
		if (array[i] != 0) {
			cout << array[i] << endl;
		}
	}
}
