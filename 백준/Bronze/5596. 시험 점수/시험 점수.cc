#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0,c;
	for (int i = 0; i < 4; i++) {
		cin >> c;
		a += c;
	}
	for (int i = 0; i < 4; i++) {
		cin >> c;
		b += c;
	}
	if (a >= b) {
		cout << a;
	}
	else
		cout << b;
}