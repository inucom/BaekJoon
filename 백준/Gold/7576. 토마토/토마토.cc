#include <iostream>
#include <queue>
using namespace std;

//int map[1001][1001];
int visited[1001][1001];
int arrow[4][2] = { {1,0},{-1,0},{0,-1},{0,1} };
queue<pair<int, int>> q;
void bfs(int m, int n) {

	int x, y;
	while(!q.empty()){
		x = q.front().second;
		y = q.front().first;
		q.pop();
	//	for (int i = 0; i < n; i++) {
	//		for (int j = 0; j < m; j++) {
	//			cout<< visited[i][j];
	//			}
	//		cout << "\n";
	//		}
	//cout << "==========\n";
		for (int i = 0; i < 4; i++) {
			int xx = x + arrow[i][0];
			int yy = y + arrow[i][1];
			
			if (xx >= 0 && yy >= 0 && xx < m && yy < n) {
				if (visited[yy][xx] == 0) {
					visited[yy][xx] = visited[y][x] +1;
					q.push({ yy,xx });
				}
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> visited[i][j];
			if (visited[i][j] == 1) {
				q.push({ i,j });
			}
		}
	}
	bfs(m,n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ans < visited[i][j])
				ans = visited[i][j];
			if (visited[i][j] == 0)
			{
				cout << -1;
				return 0;
			}

		}
	}
	cout << ans-1;
}