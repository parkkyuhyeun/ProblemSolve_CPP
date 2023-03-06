#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int* array = new int[n];
	for (int v = 0; v < m; v++)
	{
		int i, j;
		cin >> i >> j;
		int k = array[i];
		array[i] = array[j];
		array[j] = k;
	}
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		cout << array[i] << " ";
	}
}
