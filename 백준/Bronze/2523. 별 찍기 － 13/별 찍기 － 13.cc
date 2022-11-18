#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n; i < 2 * n - 1; i++) {
		for (int j = n; j <= 3 * n - i- 2; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}