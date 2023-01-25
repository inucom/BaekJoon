#include <iostream>
using namespace std;

int main() {
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	if (a % c == 0)
		a = a / c;
	else a = a / c + 1;

	if (b % d == 0)
		b = b / d;
	else
		b = b / d + 1;
	if (a <= b)
		a = b;

	cout << l - a;
	
}