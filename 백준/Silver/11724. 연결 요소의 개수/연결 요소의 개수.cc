#include <iostream>

using namespace std;
int n, m, cnt = 0;
bool map[1001][1001], visited[1001];

void dfs(int v) {
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[v][i] && !visited[i]) {
			dfs(i);
		}
	}
}

int main() {
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		map[a][b] =map[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			cnt++;
			dfs(i);
		}
	}
	cout << cnt;
}