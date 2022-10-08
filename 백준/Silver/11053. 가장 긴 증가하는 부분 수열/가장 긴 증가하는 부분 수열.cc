#include <iostream>
using namespace std;
int arr[1001], dp[1001];

int main() {
	int n;
	cin >> n;
	int Ai;
	for (int i = 1; i <= n; i++) {
		cin >> Ai;
		arr[i] = Ai;
	}
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(dp[i], ans);
	}
	cout << ans;
}