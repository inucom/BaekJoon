#include <iostream>
using namespace std;

int n, m;
int ans[9];
void dfs(int start,int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = start; i <= n; i++) {
		ans[cnt] = i;
		dfs(i+1, cnt + 1);
	}
}

int main() {
	cin >> n >> m;
	dfs(1, 0);
}