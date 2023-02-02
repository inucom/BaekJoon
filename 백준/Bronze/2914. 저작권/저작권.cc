#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == 1)
		cout << a * b;
	else
		cout << a * (b - 1) + 1;
}