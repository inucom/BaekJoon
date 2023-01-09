#include <iostream>
using namespace std;

int t,m, n, k, cnt = 0;
int map[51][51], arrow[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
bool visited[51][51];

void dfs(int y, int x){
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int yy = y + arrow[i][0];
		int xx = x + arrow[i][1];

		if (xx >= 0 && yy >= 0 && xx < m && yy < n) {
			if (!visited[yy][xx] && map[yy][xx] == 1) {
				dfs(yy, xx);
			}
		}
	}

}

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >>k;
		int a, b;
		for (int j = 0; j < k; j++) {
			cin >> b >> a;
			map[a][b] = 1;
		}
		for (int j = 0; j < n; j++) {
			for (int p = 0; p < m; p++) {
				if (!visited[j][p] && map[j][p] == 1) {
					cnt++;
					dfs(j, p);
				}
			}
		}
		for (int j = 0; j < n; j++) {
			for (int p = 0; p < m; p++) {
				map[j][p] = 0;
				visited[j][p] = 0;
			}
		}
		cout << cnt << "\n";
		cnt = 0;
	}
}