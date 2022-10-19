#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	string ans = "";
	ans += input[0];
	for (int i = 1; i < input.length(); i++) {
		if (input[i] == '-') {
			ans += input[i + 1];
			i++;
		}
	}
	cout << ans;
}