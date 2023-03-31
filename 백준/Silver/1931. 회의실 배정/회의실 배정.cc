#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

pair<int, int> arr[100001];

int main() {
	int N;
	cin >> N;
	int a, b;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		arr[i] = { b,a };
	}
	sort(arr, arr + N);
	int end = arr[0].first;
	int ans = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i].second >= end) {
			ans++;
			end = arr[i].first;
			//cout << arr[i].second << " " << arr[i].first << "\n";
		}
	}
	cout << ans;

}