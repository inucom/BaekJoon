#include <iostream>
using namespace std;
int arr[101];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int v, cnt = 0;
	cin >> v;
	for (int i = 0; i < n; i++) {
		if (v == arr[i]) {
			cnt++;
		}
	}
	cout << cnt;
}