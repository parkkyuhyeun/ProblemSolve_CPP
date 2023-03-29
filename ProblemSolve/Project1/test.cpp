#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, k, a = 0;
	int arr[10000] = {};
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			arr[a] = i;
			a++;
		}
	}
	if (arr[k-1] == NULL) cout << "0";
	else cout << arr[k-1];
}