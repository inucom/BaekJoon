#include <iostream>
using namespace std;
long long dp[201][201];

int main() {
	int x, y, ax, ay;
	cin >> x >> y >> ax >> ay;
	dp[0][0] = 1;
	dp[0][1] = 1;
	dp[1][0] = 1;
	for (int i = 1; i <= 200; i++) {
		dp[i][0] = 1;
		dp[i][1] = 1;
	}
	for (int i = 1; i <= 200; i++) {
		dp[0][i] = 1;
		dp[1][i] = 1;
	}
	for (int i = 2; i <= 200; i++) {
		for (int j = 2; j <= 200; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1])%1000007;
		}
	}
	long long ans = dp[ax][ay] * dp[x - ax+1][y - ay+1] % 1000007;
	cout << ans;
}