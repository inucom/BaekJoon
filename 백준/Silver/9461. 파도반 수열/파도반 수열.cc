#include <iostream>
using namespace std;
long long dp[101];
int main() {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	int t;
	cin >> t;
	int input;
	for (int i = 6; i <= 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	for (int i = 1; i <= t; i++) {
		cin >> input;
		cout << dp[input] << '\n';
	}
}