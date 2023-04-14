#include <iostream>
#include <algorithm>

using namespace std;

int arr[200001];

int main() {
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int start = 0, end = arr[n - 1] - arr[0];
	int dist = 0;
	while (start <= end) {
		int mid = (start + end) / 2;
		int install = 1;

		int installed = arr[0];

		for (int i = 1; i < n; i++) {
			int winstall = arr[i];

			if (winstall - installed >= mid) {
				install++;
				installed = winstall;
			}
		}

		if (install >= c) {
			dist = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}


	}
	cout << dist;

}