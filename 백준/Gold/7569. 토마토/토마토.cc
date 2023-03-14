#include <iostream>
#include <queue>
using namespace std;
int visited[101][101][101];
int arrow[6][3] = { {1,0,0},{-1,0,0},{0,-1,0},{0,1,0},{0,0,1},{0,0,-1}};
queue<pair<pair<int, int>, int>> q;
void bfs(int m, int n, int h) {

	int x, y,z;
	while (!q.empty()) {
		x = q.front().first.second;
		y = q.front().first.first;
		z = q.front().second;
		q.pop();
		for (int i = 0; i < 6; i++) {
			int xx = x + arrow[i][0];
			int yy = y + arrow[i][1];
			int zz = z + arrow[i][2];
			if (xx >= 0 && yy >= 0 && xx < m && yy < n&& zz>=0 && zz<h) {
				if (visited[yy][xx][zz] == 0) {
					visited[yy][xx][zz] = visited[y][x][z] + 1;
					q.push({ { yy,xx },zz });
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n,h;
	cin >> m >> n>>h;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> visited[i][j][k];
				if (visited[i][j][k] == 1) {
					q.push({ { i,j }, k });
				}
			}
		}
	}
	bfs(m, n, h);
	int ans = 0;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (ans < visited[i][j][k])
					ans = visited[i][j][k];
				if (visited[i][j][k] == 0)
				{
					cout << -1;
					return 0;
				}
			}
		}
	}
	cout << ans - 1;
}