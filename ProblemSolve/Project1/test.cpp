#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n, answer, m, cAnswer;
    vector<int> vt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> answer;
        vt.push_back(answer);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cAnswer = 0;
        cin >> answer;
        for (int i = 0; i < n; i++)
        {
            if (answer == vt[i]) 
            {
                cAnswer = 1;
                break;
            }
        }
        cout << cAnswer << endl;
    }
}