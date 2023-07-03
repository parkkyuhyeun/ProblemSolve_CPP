#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int aCount, bCount, answer, count = 0;
    cin >> aCount >> bCount;
    unordered_set<int> a;
    unordered_set<int> b;
    for (int i = 0; i < aCount; i++) {
        cin >> answer;
        a.insert(answer);
    }
    for (int i = 0; i < bCount; i++) {
        cin >> answer;
        if (a.find(answer) == a.end()) {
            count++;
        }
        b.insert(answer);
    }
    for (auto i : a) {
        if (b.find(i) == b.end()) {
            count++;
        }
    }
    cout << count;
}