#include <iostream>
#include <vector>
using namespace std;

vector<int> tree[100001];
int parent[100001];

void dfs(int cur, int prev) {
    parent[cur] = prev;
    for (int i = 0; i < tree[cur].size(); i++) {
        int next = tree[cur][i];
        if (next != prev) {
            dfs(next, cur);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << "\n";
    }
    return 0;
}
