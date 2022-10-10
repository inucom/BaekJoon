#include <iostream>
using namespace std;
int main() {
	int t;
	int n, m;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> m;
		unsigned long long ans = 1;
		int mod = 0;
		for (int j = m; j > m-n; j--) {
			ans *= j;
			mod++;
			ans /= mod;
		}
		cout << ans << '\n';
	}
}