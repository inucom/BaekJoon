#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char> st;
	int ans = 0;
	string input;
	cin >> input;
	int calc = 1;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '[') {
			calc *= 3;
			st.push(input[i]);
		}
		else if (input[i] == '(') {
			calc *= 2;
			st.push(input[i]);
		}
		else if (!st.empty() && input[i] == ']') {
			if (st.top() == '[') {
				st.pop();
				if (input[i - 1] == '[') {
					ans += calc;
					calc /= 3;
				}
				else
					calc /= 3;
			}
			else {
				ans = 0;
				break;
			}
		}
		else if (!st.empty() && input[i] == ')') {
			if (st.top() == '(') {
				st.pop();
				if (input[i - 1] == '(') {
					ans += calc;
					calc /= 2;
				}
				else
					calc /= 2;
			}
			else {
				ans = 0;
				break;
			}
		}
		else {
			ans = 0;
			break;
		}
	}
	if (st.empty() != 1) {
		ans = 0;
	}
	cout << ans;
}