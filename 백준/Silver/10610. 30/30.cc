#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string n;
	cin >> n;
	int tmp = 0;
	for (int i = 0; i < n.length(); i++) {
		tmp += n[i] - '0';
	}
	if (tmp % 3 == 0) {
		sort(n.begin(), n.end(), greater<char>());
		if (n.back() == '0') {
			cout << n;
		}
		else
			cout << -1;
	}
	else
		cout << -1;
}