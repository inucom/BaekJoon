#include <iostream>
#include <cmath>
using namespace std;

int arr[10];
int main() {
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		int tmp = ans;
		ans += arr[i];
		if (ans >= 100) {
			if (ans - 100 > 100 - tmp) {
				cout << tmp;
			}
			else {
				cout << ans;
			}
			break;
		}
	}
	if (ans < 100) {
		cout << ans;
	}

}