#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
	int n, m, i, j;
	cin >> n >> m;
	int* basket = new int[n];
	int* re_basket = new int[n];
	for (int v = 0; v < n; v++)
	{
		basket[v] = v + 1;
		re_basket[v] = v + 1;
	}
	for (int v = 0; v < m; v++)
	{
		cin >> i >> j;
		int count = i - 1;
		for (int g = j - 1; g >= i - 1; g--) //µÚÁı±â
		{
			re_basket[count] = basket[g];
			count++;
		}
		for (int b = 0; b < n; b++)
		{
			basket[b] = re_basket[b];
		}
	}
	for (int t = 0; t < n; t++)
	{
		cout << re_basket[t] << " ";
	}
}
