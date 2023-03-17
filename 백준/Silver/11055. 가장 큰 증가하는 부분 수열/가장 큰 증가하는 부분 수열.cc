#include <iostream>
using namespace std;

int main() {
	int arr[1001];
	int sum[1001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		sum[i] = arr[i];
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] > arr[j]) {
				sum[i] = max(sum[i], sum[j] + arr[i]);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (ans < sum[i]) {
			ans = sum[i];
		}
	}
	cout << ans;
}