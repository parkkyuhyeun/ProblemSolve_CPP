#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int caseCount;
	string str;
	cin >> caseCount;
	for (int i = 0; i < caseCount; i++)
	{
		stack<char> st;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '(') st.push(str[j]);
			else if (str[j] == ')')
			{
				if (st.empty())
				{
					st.push('s');
					break;
				}
				st.pop();
			}
		}
		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}