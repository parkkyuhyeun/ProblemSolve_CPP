#include <iostream>
using namespace std;

int board[51][51];
int visited[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= 51 || ny >= 51) continue;
		if (board[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	return;
}

int main() {
	int t, m, n, k, x, y;
	cin >> t;
	while (t--) {
		int count = 0;
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
}