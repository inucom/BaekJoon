#include <iostream>
#include <algorithm>
using namespace std;
int n, m, arr[9], ans[9];


void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < cnt; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (cnt != 0 && ans[cnt - 1] > arr[i])continue;
		ans[cnt] = arr[i];
		dfs(cnt + 1);
	}

}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	dfs(0);
}