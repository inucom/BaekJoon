#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[7];
	int arr2[7];
	int index = 0, sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1) {
			sum += arr[i];
			arr2[index++] = arr[i];
		}
	}
	if (index == 0) {
		cout << -1;
	}
	else {
		sort(arr2, arr2 + index);
		cout << sum << "\n" << arr2[0];
	}
}