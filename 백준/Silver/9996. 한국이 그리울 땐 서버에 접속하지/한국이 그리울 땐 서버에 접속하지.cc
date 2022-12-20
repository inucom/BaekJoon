#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
	int n;
	cin >> n;
	string input;
	string pat;
	cin >> pat;
	string patt = "";
	for (int i = 0; i < pat.length(); i++) {
		if (pat[i] != '*') {
			patt += pat[i];
		}
		else
		{
			patt += "\\w*";
		}
	}
	//cout << patt;
	regex pattern(patt);
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (regex_match(input, pattern)) {
			cout << "DA\n";
		}
		else
			cout << "NE\n";
	}
}