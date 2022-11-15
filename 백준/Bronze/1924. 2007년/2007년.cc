#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	int arr[13];
	arr[1] = arr[3] = arr[5] = arr[7] = arr[8] = arr[10] = arr[12]
		= 31;
	arr[2] = 28;
	arr[4] = arr[6] = arr[9] = arr[11] = 30;
	int sum = 0;
	for (int i = 1; i < x; i++) {
		sum += arr[i];
	}
	sum += y;
	if (sum % 7 == 1) {
		cout << "MON";
	}
	else if (sum % 7 == 2) {
		cout << "TUE";
	}
	else if (sum % 7 == 3) {
		cout << "WED";
	}
	else if (sum % 7 == 4) {
		cout << "THU";
	}
	else if (sum % 7 == 5) {
		cout << "FRI";
	}
	else if (sum % 7 == 6) {
		cout << "SAT";
	}
	else if (sum % 7 == 0) {
		cout << "SUN";
	}
}