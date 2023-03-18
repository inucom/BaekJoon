#include <iostream>
#include <algorithm>
using namespace std;
int coin[101];
int dp[10001];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	dp[0] = 1;
	for (int j = 0; j < n; j++) {
		for (int i = coin[j]; i <= k; i++) {
			dp[i] = dp[i] + dp[i - coin[j]];
		}
	}
	cout << dp[k];
}