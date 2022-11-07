#include <iostream>
using namespace std;
int arr[9];
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	bool check = 0;
	int sub = sum - 100;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sub == arr[i] + arr[j]) {
				arr[i] = 0;
				arr[j] = 0;
				check = 1;
				break;
			}
		}
		if (check == 1) {
			break;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0) {
			cout << arr[i] << '\n';
		}
	}
}