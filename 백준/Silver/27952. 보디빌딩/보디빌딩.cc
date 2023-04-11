#include <iostream>

using namespace std;

int a[500001];
int b[500001];

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long weight = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		weight += b[i];
		if (weight < a[i]) {
			cout << -1;
			return 0;
		}
	}
	cnt = (weight - a[n - 1]) / x;
	cout << cnt;
}
