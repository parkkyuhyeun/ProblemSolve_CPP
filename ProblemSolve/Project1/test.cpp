#include <iostream>

using namespace std;

int main()
{
	int a, b;
	bool zero = false;
	while (!zero)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) zero = true;
		else
		{
			if (b % a == 0) cout << "factor" << endl;
			else if (a % b == 0) cout << "multiple" << endl;
			else cout << "neither" << endl;
		}
	}
}