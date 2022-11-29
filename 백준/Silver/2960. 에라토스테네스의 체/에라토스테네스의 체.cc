#include <iostream>
using namespace std;
int arr[1001] = {1,1,0,0,};
int main() {
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (arr[i]) {
			continue;
		}
		arr[i] = 1;
		cnt++;
		
		if (cnt == k) {
			cout << i;
			break;
		}
		for (int j = 2 * i; j <= n; j += i) {
			if (!arr[j]) {
				arr[j] = 1;
				cnt++;
				if (cnt == k) {
					cout << j;
					break;
				}
			}
		}
		if (cnt == k) {
			break;
		}
	}
}