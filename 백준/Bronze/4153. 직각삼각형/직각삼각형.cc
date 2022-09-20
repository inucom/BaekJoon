#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int a[3];
	while (true) {
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		sort(a, a + 3);
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}