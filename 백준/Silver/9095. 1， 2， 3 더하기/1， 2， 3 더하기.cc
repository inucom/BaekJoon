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
	dp[5] = 13;
	dp[6] = 24;
	dp[7] = 44;
	dp[8] = 81;
	dp[9] = 149;
	dp[10] = 274;
	for (int a = 0; a < t; a++) {
		cin >> n;
		cout << dp[n] << '\n';
	}
}