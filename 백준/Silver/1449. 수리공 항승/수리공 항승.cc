#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main() {
	int n, l;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int ans = 1;
	int ll = l-1;
	for (int i = 0; i < n - 1; i++) {
		arr[i] = arr[i + 1] - arr[i];
		if (ll < arr[i]) {
			ll = l-1;
			ans++;
		}
		else {
			ll -= arr[i];
		}
	}
	//for (int i = 0; i < n - 1; i++) {
	//	cout << arr[i] << "\n";
	//}
	cout << ans;
}