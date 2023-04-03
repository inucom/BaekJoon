#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			int a, b;
			cin >> a >> b;
			arr[j] = { a,b };
		}
		sort(arr, arr + n);
		int min = 100001, ans = 0;
		for (int j = 0; j < n; j++) {
			//cout << arr[j].second << " second " << min << " min \n";
			if (arr[j].second < min) {
				min = arr[j].second;
				ans++;
			}
		}
		cout << ans << "\n";
	}
}