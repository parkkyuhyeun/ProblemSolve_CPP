#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			cout << " ";
		}
		for (int l = 0; l <= i*2; l++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int l = 2*n-5; l >= i*2-1; l--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
