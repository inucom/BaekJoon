#include <iostream>
#include <vector>
using namespace std;


int arr[1001];
int dp[1001];
int dp1[1001];
int dp2[1001];



int main() {
	int n;
	cin >> n;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp1[0] = 1;
	dp2[n-1] = 1;
	for (int i = 1; i < n; i++) {
		dp1[i] = 1;
		for (int j = i-1; j >=0; j--) {
			if (arr[i]>arr[j]) {
				dp1[i] = max(dp1[i], dp1[j] + 1);
			}
		}
	}
	for (int i = n-2; i>=0; i--) {
		dp2[i] = 1;
		for (int j = i+1; j<n; j++) {
			if (arr[i] > arr[j]) {
				dp2[i] = max(dp2[i], dp2[j] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		dp[i] = dp1[i] + dp2[i];
		if (ans < dp[i]) {
			ans = dp[i];
		}

	}
	cout << ans - 1;

}