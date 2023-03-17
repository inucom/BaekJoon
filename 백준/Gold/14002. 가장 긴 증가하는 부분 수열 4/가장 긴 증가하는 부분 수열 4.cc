#include <iostream>
using namespace std;
int arr[1001], dp[1001];
int dparr[1001][1001];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		dparr[i][0] = arr[i];
	}
	int ans = 0, arrans = 0;
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
				if (dp[i] == dp[j]+1) {

					dparr[i][dp[i] - 1] = arr[i];
					for (int k = 0; k < dp[j]; k++) {
						dparr[i][k] = dparr[j][k];
					}
				}
			}
			if (ans < dp[i]) {
				ans = dp[i];
				arrans = i;
			}
			//cout << "max : " << dp[i] << "\n";
			//for (int k = 0; k < dp[i]; k++) {
			//	cout << dparr[i][k] << " ";
			//}
			//cout << "\n";


		}
	}
	//for (int j = 0; j < n; j++) {
	//	for (int i = 0; i < ans; i++) {
	//		cout << dparr[j][i] << " ";
	//	}
	//	cout << "\n";
	//}

	if (n == 1) {
		cout << 1 << "\n" << arr[0];
	}
	else {

		cout << ans << "\n";
		for (int i = 0; i < ans; i++) {
			cout << dparr[arrans][i] << " ";
		}
	}
}