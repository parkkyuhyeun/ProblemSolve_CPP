#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    unordered_map<string, int> map1;
    map<string, int> map2;
    string name;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> name;
        map1[name] = 1;
    }
    for (int i = 0; i < m; i++) {
        cin >> name;
        if (map1[name] == 1) map2[name];
    }
    cout << map2.size() << '\n';
    for (auto itr : map2) {
        cout << itr.first << '\n';
    }
}