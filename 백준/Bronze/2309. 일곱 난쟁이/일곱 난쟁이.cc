#include <iostream>
#include <algorithm>
using namespace std;
int arr[9];
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int find = sum - 100;
	bool check = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			int cmp = arr[i] + arr[j];
			if (cmp == find) {
				arr[i] = 0;
				arr[j] = 0;
				check = 1;
				break;
			}
		}
		if (check == 1)
			break;
	}
	sort(arr, arr + 9);
	for (int i = 2; i < 9; i++) {
		cout << arr[i] << '\n';
	}
}