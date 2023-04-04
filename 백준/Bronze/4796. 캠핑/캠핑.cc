#include <iostream>

using namespace std;

int main() {
	int l, p, v;
	int index = 1;
	while (true) {
		
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) {
			break;
		}
		int ans = (v / p) * l;
		int tmp = v % p;
		if (tmp > l) {
			tmp = l;
		}
		ans += tmp;

		cout << "Case " << index << ": " << ans << "\n";
		index++;
	}
}