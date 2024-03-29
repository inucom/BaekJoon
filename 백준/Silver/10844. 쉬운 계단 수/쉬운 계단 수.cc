#include <iostream>
#include <cmath>
using namespace std;
long long dp[101][10];
//int dp[101][10];
#define mod 1000000000
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j + 1] % mod;
			}
			else if (j == 9) {
				dp[i][j] = dp[i - 1][j - 1] % mod;
			}
			else
				dp[i][j] = dp[i - 1][j - 1]%mod + dp[i - 1][j + 1]%mod;
			//dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		ans += dp[n][i]%mod;
		//ans %= mod;
	}
	cout << ans % mod ;
}