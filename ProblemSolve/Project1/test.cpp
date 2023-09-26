#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S);
	for (int i = 0; i < S.size(); i++) {
		if (S[i] >= 'A' && S[i] <= 'Z') {
			S[i] += 13;
			if (S[i] > 90) S[i] -= 26;
		}
		if (S[i] >= 'a' && S[i] <= 'z') {
			S[i] > 109 ? S[i] -= 13 : S[i] += 13;
		}
	}
	std::cout << S;
}