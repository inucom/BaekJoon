#include <iostream>
using namespace std;
int value[2][100001];
int  n, dp[2][100001];
void solve() {


	dp[0][0] = value[0][0];
	dp[1][0] = value[1][0];

	dp[0][1] = value[0][1] + dp[1][0];
	dp[1][1] = value[1][1] + dp[0][0];

	//dp[0][2] = max(dp[1][1] , dp[1][0]) + value[0][2];
	//dp[1][2] = max(dp[0][1] , dp[0][0]) + value[1][2];

	
	for (int j = 2; j < n; j++) {
		dp[0][j] = value[0][j] + max(dp[1][j - 1], dp[1][j - 2]);
		dp[1][j] = value[1][j] + max(dp[0][j - 1], dp[0][j - 2]);
		
	}
	int ans = max(dp[0][n - 1], dp[1][n - 1]);
	cout << ans << "\n";

}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < n; k++) {
				cin >> value[j][k];
			}
		}
		solve();

	}
}