#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int h, w, n;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int a = n / h, b = n % h;
		//cout << a << " " << b;
		int h1, w1;
		if (b == 0) {
			h1 = h;
		}
		else
			h1 = b;
		if (a * h < n) {
			a = a + 1;
		}
		cout << h1;
		cout.width(2);
		cout.fill('0');
		cout << a<<"\n";
	}
}