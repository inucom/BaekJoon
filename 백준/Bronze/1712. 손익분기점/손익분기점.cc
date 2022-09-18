#include <iostream>
using namespace std;
int main() {
	int  a, b, c;
	long long price,bep;
	cin >> a >> b >> c;
	if (b >= c) {
		cout << -1;
		return 0;
	}
	int ans = a / (c - b) + 1;
	cout << ans;
}