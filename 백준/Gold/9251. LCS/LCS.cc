#include <iostream>
#include <string>
using namespace std;
long long dp[1001][1001] = { 0, };
int main() {
	string inputa, inputb;
	cin >> inputa >> inputb;
	for (int i = 1; i <= inputa.length(); i++) {
		for (int j = 1; j <= inputb.length(); j++) {
			if (inputa[i-1] == inputb[j-1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}
	cout << dp[inputa.length()][inputb.length()];
}
//