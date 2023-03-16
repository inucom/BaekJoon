#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int bfs(int k, int v, vector<vector<pair<int,int>>>& adj) {
	vector<bool>visited(adj.size(), false);
	queue<int>q;
	q.push(v);
	visited[v] = true;
	int result = 0;
	while (!q.empty()) {
		int from = q.front();
		q.pop();
		for (auto u : adj[from]) {
			if (visited[u.first] || u.second < k) continue;
			result++;
			visited[u.first] = true;
			q.push(u.first);
		}
	}
	return result;
}

int main() {
	int N, Q;
	cin >> N >> Q;
	int p, q, r;

	vector<vector<pair<int,int>>> adj(N+1);
	

	for (int i = 0; i < N - 1; i++) {
		cin >> p >> q >> r;
		adj[p].push_back({q, r});
		adj[q].push_back({ p,r });	
	}
	int k, v;
	for (int i = 0; i < Q; i++) {
		cin >> k >> v;
		int ans = bfs(k, v, adj);
		cout << ans << "\n";
	}
}