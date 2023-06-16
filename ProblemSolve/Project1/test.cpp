#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> books;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string book;
        cin >> book;
        books[book]++;
    }
    string bestSellBook;
    int sellCount = 0;
    for (auto s : books) {
        if (sellCount < s.second) {
            bestSellBook = s.first;
            sellCount = s.second;
        }
    }
    cout << bestSellBook;
}