#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	int A[10];
	for (int e = 0; e < t; e++) {
		for (int i = 0; i < 10; i++) {
			cin >> A[i];
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < i; j++) {
				if (A[i] < A[j]) {
					int temp = A[i];
					A[i] = A[j];
					A[j] = temp;
				}
			}
		}
		cout << A[7] << endl;
	}
}