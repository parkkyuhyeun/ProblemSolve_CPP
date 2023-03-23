#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') count++;
	}
	if (s.back()  == ' ')
	{
		if (s.front() == ' ')
		{
			cout << count - 1;
		}
		else
		{
		cout << count;

		}
	}
	else if (s.front() == ' ')
	{
		cout << count;
	}
	else
	{
		cout << count + 1;
	}
}
