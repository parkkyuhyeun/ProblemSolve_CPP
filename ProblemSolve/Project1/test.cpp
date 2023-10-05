#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (x < y) {
		if (x < w - x) {
			if (x < h - y) {
				cout << x;
			}
			else {
				cout << h - y;
			}
		}
		else {
			if (w - x < h - y) {
				cout << w - x;
			}
			else {
				cout << h - y;
			}
		}
	}
	else {
		if (y < h - y) {
			if (y < w - x) {
				cout << y;
			}
			else {
				cout << w - x;
			}
		}
		else {
			if (h - y < w - x) {
				cout << h - y;
			}
			else {
				cout << w - x;
			}
		}
	}
}