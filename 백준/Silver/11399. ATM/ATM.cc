#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];

	}
	sort(arr, arr + N);
	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans += arr[i] * (N - i);
	}
	cout << ans;
}