#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, m, ans[101][101];
bool maze[101][101], visited[101][101];

int arrow[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
queue < pair<int,int >> que;

void bfs(int x, int y) {
	visited[y][x] = 1;
	que.push({ y,x });
	ans[x][y] = 1;
	while (!que.empty()) {
		
		int x = que.front().second;
		int y = que.front().first;
			que.pop();
		for (int i = 0; i < 4; i++) {
			int xx = x + arrow[i][1];
			int yy = y + arrow[i][0];

			if (xx >= 0 && yy >= 0 && xx < m && yy < n){
				if(!visited[yy][xx] && maze[yy][xx]){
				ans[yy][xx] += ans[y][x] + 1;
				visited[yy][xx] = 1;
				que.push({ yy,xx });
				}
			}
		}
		
	}


}

int main() {
	string str;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < m; j++) {
			maze[i][j] = str[j] - '0';
		}
	}
	bfs(0, 0);
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << ans[n - 1][m - 1];
}