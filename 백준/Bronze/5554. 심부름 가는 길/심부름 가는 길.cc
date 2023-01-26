#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int e = a + b + c + d;
	cout << e / 60 << "\n" << e % 60;
}