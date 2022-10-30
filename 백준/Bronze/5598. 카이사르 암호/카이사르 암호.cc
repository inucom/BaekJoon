#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	string ans = "";
	for (int i = 0; i < input.length(); i++) {
		if (input[i]-'A' < 3) {
			ans+= (input[i] + 23);
		}
		else {
			ans += (input[i] - 3);
		}
	}
	cout << ans;
}