#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int ans;
	for (int i = 0; i <= input.length() / 2; i++) {
		if (input[i] == input[input.length() - 1 - i]) {
			ans = 1;
			continue;
		}
		else {
			ans = 0;
			break;
		}
	}
	if (input.length() == 1)
		ans = 1;
	cout << ans;
}