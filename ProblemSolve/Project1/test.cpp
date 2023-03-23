#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, i, j, k;
	cin >> n >> m;
	int* baskets = new int[n];
	int* baskets2 = new int[n];
	for (int v = 0; v < n; v++)
	{
		baskets[v] = v + 1;
		baskets2[v] = v + 1;
	}
	for (int v = 0; v < m; v++)
	{
		cin >> i >> j >> k;
		for (int a = k-1; a < j; a++)
		{
			baskets[i+a-k] = baskets2[a];
		}
		for (int a = i-1; a < k-1; a++)
		{
			baskets[a+j-k+1] = baskets2[a];
		}
		for (int a = 0; a < n; a++)
		{
			baskets2[a] = baskets[a];
		}
	}
	for (int a = 0; a < n; a++)
	{
		cout << baskets[a] << " ";
	}
}
