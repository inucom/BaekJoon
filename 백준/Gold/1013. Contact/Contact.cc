#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	int t;
	cin >> t;
	string input;
	regex pat("(100+1+|01)+");
	for (int i = 0; i < t; i++) {
		cin >> input;
		if (regex_match(input, pat)) {
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
}