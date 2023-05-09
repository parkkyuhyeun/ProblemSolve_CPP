#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k = 0;
    int num = 0;
    int sum = 0;
    stack<int> st;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num != 0)
        {
            st.push(num);
        }
        else
        {
            st.pop();
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (st.empty())
        {
            cout << sum;
            return 0;
        }
        else
        {
            sum = sum + st.top();
            st.pop();
        }
    }

    cout << sum;
    return 0;
}