#include <iostream>
#include <cmath>
using namespace std;
int ans[1000001];
int main() {
	int m, n;
	cin >> m >> n;
	
	if (m == 1)
		m += 1;
	for (int i = 2; i <= n; i++) {
		ans[i] = i;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (ans[i] == 0) {
			continue;
		}
		for (int j = 2*i; j <= n; j += i) {
			ans[j] = 0;
		}
	}
	for (int i = m; i <= n; i++) {
		if (ans[i] != 0) {
			cout << ans[i] << "\n";
		}
	}

}