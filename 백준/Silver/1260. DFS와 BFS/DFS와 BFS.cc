#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
bool visited[10001];
queue<int> que;
int n, m, v;
void dfs(int v) {
	visited[v] = 1;
	cout << v << " ";

	for (int i = 1; i <= n; i++) {
		if (map[v][i] && !visited[i]) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	que.push(v);
	visited[v] = 1;
	cout << v << ' ';

	while (!que.empty()) {
		v = que.front();
		que.pop();

		for (int w = 1; w <= n; w++) {
			if (map[v][w] && !visited[w]) {
				que.push(w);
				visited[w] = 1;
				cout << w << ' ';
			}
		}
	}

}

int main() {
	
	cin >> n >> m >> v;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	dfs(v);
	cout << '\n';
	for (int i = 0; i <= n; i++) {
		visited[i] = 0;
	}
	bfs(v);
}