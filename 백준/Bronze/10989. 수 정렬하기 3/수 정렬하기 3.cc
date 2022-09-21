#include <iostream>
using namespace std;
int k[10001] {0,};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		k[a]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (k[i] != 0) {
			for (int j = 0; j < k[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}
