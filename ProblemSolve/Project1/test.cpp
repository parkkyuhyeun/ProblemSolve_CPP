#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		int v, j;
		cin >> v >> j;
		int k = array[v-1];
		array[v-1] = array[j-1];
		array[j-1] = k;
	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
