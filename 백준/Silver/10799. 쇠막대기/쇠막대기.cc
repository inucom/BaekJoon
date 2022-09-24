#include <iostream>
#include <stack>
#include <string>
using namespace std;
char line[100000];
int main() {
	//stack<char> stick;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string input;
	cin >> input;
	int cc = input.length();
	for (int i = 0; i < cc; i++) {
		//stick.push(input[i]);
		line[i] = input[i];
	}
	int snum = 0, ans = 0;
	for (int i = 0; i < cc-1; i++) {
		if (line[i] == '(' && line[i] == line[i + 1]) {
			snum += 1;
			ans++;
		}
		else if (line[i] == ')' && line[i] == line[i + 1]) {
			if (snum > 0)
				snum -= 1;
		}
		else if (line[i] == '(' && line[i + 1] == ')')
			ans += snum;

	}
	cout << ans;
}
