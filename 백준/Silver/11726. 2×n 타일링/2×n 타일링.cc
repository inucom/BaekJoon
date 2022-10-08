#include <iostream>
using namespace std;
long long dp[1001];
int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] = dp[i] % 10007;
	}
	cout << dp[n];
}