#include <iostream>
#include <algorithm>
using namespace std;
int st[301], dp[301];
int main() {
	st[0]= dp[0] = 0;
	
	int n;
	cin >> n;
	int stair;
	for (int i = 1; i <= n; i++) {
		cin >> stair;
		st[i] = stair;
	}
	dp[1] = dp[0] + st[1];
	dp[2] = dp[1] + st[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = max((st[i] + st[i-1] + dp[i-3]), (st[i] + dp[i - 2]));
	}
	cout << dp[n];
}