#include <iostream>
using namespace std;
int dp1[41];
int dp2[41];
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	int input;
	dp1[0] = 1;
	dp2[0] = 0;
	dp1[1] = 0;
	dp2[1] = 1;
	for (int i = 0; i < t; i++) {
		cin >> input;
		for (int j = 2; j <= input; j++) {
			dp1[j] = dp1[j - 1] + dp1[j - 2];
			dp2[j] = dp2[j - 1] + dp2[j - 2];
		}
		cout << dp1[input] << ' ' << dp2[input]<<'\n';
	}

}