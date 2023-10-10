#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int N, M, tmp;
    map<int, bool> mp;
    vector<int> ans;
    cin >> N;
    while (N--)
    {
        cin >> tmp;
        mp[tmp] = true;
    }

    cin >> M;
    while (M--)
    {
        cin >> tmp;
        ans.push_back(mp[tmp]);
    }

    for (int i : ans)
        cout << i << '\n';
}