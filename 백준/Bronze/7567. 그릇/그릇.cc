#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	string input;
	cin >> input;
	int n = input.length();
	int ans = 10;
	for (int i = 1; i < n; i++) {
		if (input[i] == input[i - 1]) {
			ans += 5;
		}
		else
			ans += 10;
	}
	cout << ans;
}