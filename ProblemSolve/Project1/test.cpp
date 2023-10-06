#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, a, count = 0;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = n - 1; i >= 0; i--) {
		count += k / v[i];
		k -= (k / v[i]) * v[i];
	}
	cout << count;
}