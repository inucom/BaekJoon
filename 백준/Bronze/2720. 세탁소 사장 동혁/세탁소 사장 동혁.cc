#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	int a = 25, b = 10, c = 5, d = 1;
	for (int i = 0; i < t; i++) {
		int input;
		cin >> input;
		cout << input / 25 << " ";
		input -= 25 * (input / 25);
		cout << input / 10 << " ";
		input -= 10 * (input / 10);
		cout << input / 5 << " ";
		input -= 5 * (input / 5);
		cout << input << '\n';
	}
}