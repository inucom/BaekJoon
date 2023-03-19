#include <iostream>
#include <queue>
using namespace std;
long long dp[1023];

int main() {
	int n;
	cin >> n;
	queue<long long>add;
	for (int i = 1; i < 10; i++) {
		dp[i] = i;
		add.push(i);
	}
	int index = 10;
	while (index <= n && !add.empty()) {
		long long start = add.front();
		add.pop();
		int plus = start % 10;
		for (int i = 0; i < plus; i++) {
			long long result = start * 10 + i;
			dp[index++] = result;
			add.push(result);
		}
	}
		//for (int i = 0; i <= n; i++) {
		//	cout << dp[i] << "||";
		//}
	if (n > 1022) {
		cout << -1;
	}
	else {
		cout << dp[n];
	}
}