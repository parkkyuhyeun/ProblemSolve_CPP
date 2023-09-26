#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;
	for (int i = 0; i < 9; i++) {
		cin >> ans;
		n -= ans;
	}
	cout << n;
}