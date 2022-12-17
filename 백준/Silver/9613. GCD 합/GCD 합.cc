#include <iostream>
using namespace std;
int arr[101];

int gcd(int a, int b) {

	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int t;
	cin >> t;
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		long long sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(arr[j], arr[k]);
			}
		}
		cout << sum << "\n";

	}
}