#include <iostream>
#include <queue>

using namespace std;

char map[21][21];
//int visited[21][21];
int arrow[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
bool alpha[27] = { 0, };


//void bfs(int r, int c) {
//	queue<pair<int, int>> q;
//	q.push({ 0,0 });
//	visited[0][0] = 0;
//	alpha[map[0][0] - 'A'] = 1;
//	while (!q.empty()) {
//		int x = q.front().second;
//		int y = q.front().first;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int xx = x + arrow[i][0];
//			int yy = y + arrow[i][1];
//
//			if (xx >= 0 && yy >= 0 && xx < c && yy < r) {
//				if (visited[yy][xx] == 0 && alpha[map[yy][xx] - 'A'] == 0) {
//					visited[yy][xx] = visited[y][x] + 1;
//					alpha[map[yy][xx] - 'A'] = 1;
//					q.push({ yy,xx });
//				}
//			}
//		}
//	}
//}
int ans = 0;

void dfs(int r, int c,int x, int y, int cnt) {

	if (cnt > ans) {
		ans = cnt;
	}

	for (int i = 0; i < 4; i++) {
		int xx = x + arrow[i][0];
		int yy = y + arrow[i][1];

		if (xx >= 0 && yy >= 0 && xx < c && yy < r) {
			if (alpha[map[yy][xx] - 'A'] == 0) {
				alpha[map[yy][xx] - 'A'] = 1;
				dfs(r, c, xx, yy, cnt + 1);
				alpha[map[yy][xx] - 'A'] = 0;
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, c;
	cin >> r >> c;
	string input;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}
	//bfs(r,c);
	alpha[map[0][0] - 'A'] = 1;
	dfs(r,c,0,0,1);
	cout << ans;
}