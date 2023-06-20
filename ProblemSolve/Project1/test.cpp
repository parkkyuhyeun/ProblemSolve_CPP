#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<int> s;
    int n, m;
    cin >> n;
    int cardNum;
    for (int i = 0; i < n; i++) {
        cin >> cardNum;
        s.insert(cardNum);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> cardNum;
        if (s.find(cardNum) != s.end()) {
            cout << 1 << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
}