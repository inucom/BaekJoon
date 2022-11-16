#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = 0; j < 2 * n - 2 - 2 * i; j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n; i < 2 * n - 1; i++) {
		for (int j = 1; j < 2*n-i; j++) {
			cout << "*";
		}
		for (int j = 0; j < 2*i - 2*n +2; j++) {
			cout << " ";
		}
		for (int j = 1; j < 2 * n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}