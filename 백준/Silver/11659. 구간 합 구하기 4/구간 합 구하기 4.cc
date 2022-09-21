#include <iostream>
using namespace std;
int num[100001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	num[0] = 0;
	cin >> n >> m;
	int a;
	for (int l = 1; l <= n; l++) {
		cin >> a;
		num[l] = a + num[l - 1];
	}
	int i, j;
	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		cout << num[j] - num[i-1] << "\n";
	}
}