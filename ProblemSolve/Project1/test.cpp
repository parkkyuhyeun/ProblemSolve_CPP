#include <iostream>
using namespace std;

int main() {
    int n, score = 0, upper = 1;
    string answer;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> answer;
        for (int j = 0; j < answer.size(); j++) {
            if (answer[j] == 'O') {
                score += upper;
                upper++;
            }
            else if (answer[j] == 'X') {
                upper = 1;
            }
        }
        cout << score << endl;
        upper = 1;
        score = 0;
    }
}