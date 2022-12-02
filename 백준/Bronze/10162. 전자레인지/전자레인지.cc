#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int a, b, c;
	if (t % 10 != 0) {
		cout << -1;
	}
	else
	{
		a = t / 300;
		b = (t - 300 * a)/60;
		c = (t - 300 * a - 60 * b) / 10;
		cout << a << ' ' << b << ' ' << c;
	}
	
}