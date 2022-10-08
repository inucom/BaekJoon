#include <iostream>
using namespace std;
int dp[11];
int main() {
	int t,n;
	cin >> t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	dp[4] = 7;
	for (int a = 0; a < t; a++) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[n] << '\n';
	}
}