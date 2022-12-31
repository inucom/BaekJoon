#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string input;
	cin >> input;
	long long num = 0, ans = 0;

	for (int i = 0; i < n; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			num *= 10;
			num += input[i] - '0';
		}
		else {
			ans += num;
			num = 0;
		}
	}
	ans += num;
	cout << ans;
}