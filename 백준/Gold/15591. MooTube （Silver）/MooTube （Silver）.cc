#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dfs(int k, int v, vector<vector<pair<int,int>>>& adj, vector<bool>& visited) {
    int cnt = 0; 
    visited[v] = true;

    for (auto u : adj[v]) {
    
        if (visited[u.first] || u.second < k) continue;

        cnt++;
        cnt += dfs(k, u.first, adj, visited);
    }

    return cnt;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<pair<int,int>>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int p, q, r;
        cin >> p >> q >> r;
        adj[p].push_back({q, r});
        adj[q].push_back({p, r});
    }

    for (int i = 0; i < q; i++) {
        int k, v;
        cin >> k >> v;

        vector<bool> visited(n + 1, false);
        cout << dfs(k, v, adj, visited) << '\n';
    }

    return 0;
}
