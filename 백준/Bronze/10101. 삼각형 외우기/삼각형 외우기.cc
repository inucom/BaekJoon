#include <iostream>
using namespace std;

int main() {
	int arr[3];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum != 180)
		cout << "Error";
	else {
		int cnt = 0;
		for (int i = 0; i < 2; i++) {
			for (int j = i+1; j < 3; j++) {
				if (arr[i] == arr[j]) cnt++;
			}
		}
		if (cnt == 0)
			cout << "Scalene";
		if (cnt == 1)
			cout << "Isosceles";
		if (cnt >=2)
			cout << "Equilateral";

	}
}