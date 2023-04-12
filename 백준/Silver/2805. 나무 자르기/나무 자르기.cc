#include <iostream>

using namespace std;

int arr[1000001];
int n;
long long m;

bool check(int mid) {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= mid) {
			sum += arr[i] - mid;
		}
		if (sum >= m) {
			return true;
		}
	}
	return false;
}


int main() {
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int start = 0, end = 1000000000, mid, ans;
	while (start <= end) {
		mid = (start + end) / 2;
		if (check(mid)) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	cout << ans;
}