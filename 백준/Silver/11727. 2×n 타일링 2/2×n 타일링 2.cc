#include <iostream>
using namespace std;
int dp[1001];
#define mod 10007
int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;
	
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2])%mod;
	}
	cout << dp[n];
}