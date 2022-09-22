#include <iostream>
using namespace std;
int c[100];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	int sum, max = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = c[i] + c[j] + c[k];
				if (sum == m) {
					cout << sum;
					return 0;
				}
				else if (sum < m && max < sum) {
					max = sum;
				}
			}
		}
	}
	cout << max;
}