#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001][3];
int arr[1001][3];
int main() {
	int n;
	cin >> n;
	int input;
	dp[0][0] = dp[0][1] = dp[0][2] = arr[0][0] = arr[0][1] = arr[0][2] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> input;
			arr[i][j] = input;
		}
	}
	for (int i = 1; i <= n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2])+arr[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
	}
	cout << min({ dp[n][0], dp[n][1], dp[n][2] });
}