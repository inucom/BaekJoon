#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		int n = input.length();
		if (input[n - 1] % 2 == 0) {
			cout << "even\n";
		}
		else
			cout << "odd\n";
	}
}