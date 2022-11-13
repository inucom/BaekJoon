#include <iostream>
using namespace std;
int arr[10001];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int start = 0, end = 0;
	int sum = 0,ans = 0;
	while (end <= n) {
		if (sum < m) {
			sum += arr[end++];
		}
		else if (sum >= m) {
			sum -= arr[start++];
		}
		if (sum == m)
			ans++;
		//cout << sum << " ans " << ans << "\n";
	}
	cout << ans;
}