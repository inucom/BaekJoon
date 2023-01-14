#include <iostream>

using namespace std;
int w, h;
int map[51][51], arrow[8][2] = { {0,-1},{0,1},{1,0},{-1,0},{-1,1},{-1,-1},{1,1},{1,-1} };
bool visited[51][51];

void dfs(int x, int y){
	visited[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		int xx =x+ arrow[i][0];
		int yy = y + arrow[i][1];
		if (xx >= 0 && yy >= 0 && xx < w && yy < h) {
			if (!visited[yy][xx] && map[yy][xx]==1) {
				dfs(xx, yy);
			}
		}
	}
}
int ans;
int main() {
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
				visited[i][j] = 0;
			}
		}
		ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!visited[i][j] && map[i][j] ==1) {
					ans++;
					dfs(j, i);
				}
			}
		}
		cout << ans << "\n";
	}
}