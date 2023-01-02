#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[8], arr2[8];
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr2[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		arr2[cnt] = arr[i];
		dfs(cnt+1);
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