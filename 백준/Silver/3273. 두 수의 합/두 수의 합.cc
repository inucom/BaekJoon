#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int x;
	cin >> x;
	int cnt = 0;
	int end = n-1, start = 0;
	while (start < end) {
		if (arr[start] + arr[end] == x) {
			start++;
			end--;
			cnt++;
		}
		else if (arr[start] + arr[end] > x) {
			end--;
		}
		else
			start++;
	}
	cout << cnt;
}