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
	dp[0] = 0;
	for (int i = 1; i <= k; i++) {
		dp[i] = 10001;
	}
	for (int j = 0; j < n; j++) {
		for (int i = coin[j]; i <= k; i++) {
			dp[i] = min(dp[i], dp[i - coin[j]]+1);
		}
	}
	if (dp[k] == 10001)
		cout << -1;
	else 
		cout << dp[k];
}