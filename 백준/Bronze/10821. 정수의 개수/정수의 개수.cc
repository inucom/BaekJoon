#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	int ans = 1;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ',') {
			ans++;
		}
	}
	cout << ans;
}