#include <iostream>

using namespace std;
int n, m;
bool map[101][101], visited[101];
int cnt = 0;
void dfs(int v) {
	visited[v] = 1;
	cnt++;
	for (int i = 1; i <= n; i++)
	{
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
		map[a][b] = map[b][a] = 1;
	}
	dfs(1);
	cout << cnt-1;
}