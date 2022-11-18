#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		for (int j = 2 * n; j > 2 * n - 2 * i - 1; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n; i < 2 * n - 1; i++) {
		for (int j = 0; j <= i-n; j++) {
			cout << " ";
		}
		for (int j = 0; j < 4*n - 2*i -3; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

