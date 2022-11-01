#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	string check;
	getline(cin, check);
	int n = input.length();
	int cn = check.length();
	int ans = 0;
	for (int i = 0; i <= n-cn; i++) {
		string sub = input.substr(i, cn);
		if (sub == check) {
			ans++;
			i += cn-1;
		}
	}
	cout << ans;
}