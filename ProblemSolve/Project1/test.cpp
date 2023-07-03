#include <iostream>
using namespace std;

int main()
{
    int m, x, y, temp;
    int cups[3] = { 1,0,0 };
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        temp = cups[x-1];
        cups[x-1] = cups[y-1];
        cups[y-1] = temp;
    }
    for (int i = 0; i < 3; i++) {
        if (cups[i] == 1) {
            cout << i + 1;
        }
    }
}