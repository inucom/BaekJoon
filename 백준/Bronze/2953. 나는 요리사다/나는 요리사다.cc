#include <iostream>
using namespace std;
int arr[5];
int main() {
	int input;
	int max = 0, ans = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> input;
			arr[i] += input;
		}
		if (arr[i] > max) {
			max = arr[i];
			ans = i;
		}
	}
	cout << ans+1 << ' ' << max;
}