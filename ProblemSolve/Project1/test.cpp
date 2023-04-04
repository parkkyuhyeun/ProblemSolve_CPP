#include <iostream>

using namespace std;

int main()
{
	int t, c, arr[4], q = 25, d = 10, n = 5, p = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> c;
		arr[0] = c / q;
		c %= q;
		arr[1] = c / d;
		c %= d;
		arr[2] = c / n;
		c %= n;
		arr[3] = c / p;
		for (auto i : arr)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}