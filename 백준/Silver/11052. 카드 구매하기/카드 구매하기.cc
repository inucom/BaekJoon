#include <iostream>
using namespace std;
int arr[1001];
int dp[1001];
int main() {
	dp[0] = 0;
	int n;
	cin >> n;
	int input;
	for (int i = 1; i <= n; i++) {
		cin >> input;
		arr[i] = input;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + arr[j]);
		}
	}
	cout << dp[n];
}