#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string input;
	string ans;
	while (true) {
		stack<char> stk;
		getline(cin, input);
		int n = input.length();
		if (input == ".") {
			break;
		}
		for (int i = 0; i < n; i++) {
			if (input[i] == '(' || input[i] == '[') {
				stk.push(input[i]);
			}
			else if (input[i] == ')') {
				if (stk.empty() == 1) {
					ans = "no";
					break;
				}
				if (stk.top() != '(') {
					ans = "no";
					break;
				}
				else {
					ans = "yes";
					stk.pop();
				}
			}
			else if (input[i] == ']') {
				if (stk.empty() == 1) {
					ans = "no";
					break;
				}
				if (stk.top() != '[') {
					ans = "no";
					break;
				}
				else {
					ans = "yes";
					stk.pop();
				}
			}
			else ans = "yes";
		}
		if (stk.empty() != 1) {
			ans = "no";
		}
		cout << ans << '\n';
	}
}