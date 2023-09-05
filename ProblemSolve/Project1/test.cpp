#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int n, m, k, x, a, b;
	vector<vector<int>> adj;
	cin >> n >> m >> k >> x;
	vector<int> answer;
	vector<int> visited;
	adj.resize(n + 1);
	visited.resize(n + 1, -1);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
	}
	queue<int> q;
	q.push(x);
	visited[x] = 0;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < adj[now].size(); i++){
			int next = adj[now][i];
			if (visited[next] == -1) {
				q.push(next);
				visited[next] = visited[now] + 1;
				if (visited[next] == k) {
					answer.push_back(next);
				}
			}
		}
	}
	sort(answer.begin(), answer.end());
	if (answer.empty()) cout << -1;
	else {
		for (auto e : answer) {
			cout << e << "\n";
		}
	}
}