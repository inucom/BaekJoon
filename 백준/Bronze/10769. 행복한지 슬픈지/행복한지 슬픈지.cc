#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	int h = 0, s = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ':' && i <= input.length() - 2) {
			if (input[i + 1] == '-') {
				if (input[i + 2] == ')') {
					h++;
				}
				else if (input[i + 2] == '(') {
					s++;
				}
			}
		}
	}
	if (h == 0 && s == 0)
		cout << "none";
	else if (h == s) {
		cout << "unsure";
	}
	else if (h < s) {
		cout << "sad";
	}
	else if (h > s) {
		cout << "happy";
	}
	

}