#include <iostream>

using namespace std;

int main()
{
	int c;
	cin >> c;
	int arr[1000] = {};
	cin.ignore();
	for (int i = 0; i < c; i++)
	{
		float sum = 0, count = 0;
		for (int j = 0; j < arr[0]+1; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		sum = (sum - arr[0]) / arr[0];
		for (int j = 1; j <= arr[0]; j++)
		{
			if (arr[j] > sum)
			{
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << count / arr[0] * 100 << "%" << endl;
	}
}