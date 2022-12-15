#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[9];
int arr2[9];
bool check[9];
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < cnt; i++) {
			cout << arr2[i]<<' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i] == 1) continue;
		check[i] = 1;
		arr2[cnt] = arr[i];

		dfs(cnt + 1);
		check[i] = 0;
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