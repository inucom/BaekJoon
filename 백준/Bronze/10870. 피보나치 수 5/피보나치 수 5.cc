#include <iostream>
using namespace std;
int dp[21];
int main() {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;

	int n;
	cin >> n;
	for (int i = 3; i <= 20; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
}