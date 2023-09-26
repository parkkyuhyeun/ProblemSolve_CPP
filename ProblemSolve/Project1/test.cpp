#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n, m;
	string ns;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int count = 0;
		cin >> n >> m;
		for (int j = n; j <= m; j++) {
			ns = to_string(j);
			for (int k = 0; k < ns.size(); k++) {
				if (ns[k] == '0') count++;
			}
		}
		cout << count << endl;
	}
}