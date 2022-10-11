#include <iostream>
using namespace std;
int arr[11];
int main() {
	int n, k;
	cin >> n >> k;
	int coin;
	for (int i = 0; i < n; i++) {
		cin >> coin;
		arr[i] = coin;
	}
	int ans = 0;
	for (int i = n - 1; i > -1; i--) {
		if (arr[i] > k) {
			continue;
		}
		ans += k / arr[i];
		k = k % arr[i];
		if (k == 0)
			break;

	}
	cout << ans;
}