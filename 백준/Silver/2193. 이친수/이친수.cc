#include <iostream>
using namespace std;
long long dp[91][2];
int main() {
	dp[1][0] = 0;
	dp[1][1] = 1;
	
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 1; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
			}
			else
				dp[i][j] = dp[i - 1][j - 1];
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 1; i++) {
		ans += dp[n][i];
	}
	cout << ans;
}