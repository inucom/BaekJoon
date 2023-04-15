#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int m;
	cin >> m;

	int start = 0, end = arr[n-1], mid;
	while (start <= end) {
		mid = (start + end) / 2;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] <= mid) {
				sum += arr[i];
			}
			else {
				sum += mid;
			}
		}
		if (sum > m) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	cout << end;
}