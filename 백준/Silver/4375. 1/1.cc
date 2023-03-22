#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int cnt = 1;
		long long div = 1;
		while (true) {
			if (div % n == 0) {
				cout << cnt<<"\n";
				break;
			}
			div = (div%n) * 10 + 1;
			cnt++;

		}
	}
}
