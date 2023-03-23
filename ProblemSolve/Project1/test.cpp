#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int t_count = 0;
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] == s[s.size() - i - 1]) t_count++;
	}
	if (t_count == s.size() / 2) cout << 1;
	else cout << 0;
}
