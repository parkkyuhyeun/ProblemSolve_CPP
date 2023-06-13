#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int N, sum;
    cin >> N;
    vector<int> vt;
    for(int i = 0; i < N; i++)
    {
        cin >> sum;
        vt.push_back(sum);
    }
    sort(vt.begin(), vt.end());
    for(int i = 0; i < N; i++)
    {
        cout << vt[i] << endl;
    }
}