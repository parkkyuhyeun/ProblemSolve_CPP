#include <iostream>
#include <string>
using namespace std;

int main()
{
	char A[4], B[4], r_A[4], r_B[4];
	cin >> A >> B;
	int j = 2, a=0, b=0;
	for (int i = 0; i < 3; i++)
	{
		r_A[i] = A[j];
		r_B[i] = B[j];
		j--;
	}
	a = (r_A[0] - 48) * 100 + (r_A[1] - 48) * 10 + (r_A[2] - 48);
	b = (r_B[0] - 48) * 100 + (r_B[1] - 48) * 10 + (r_B[2] - 48);

	(a > b ? cout << a : cout << b);
}
