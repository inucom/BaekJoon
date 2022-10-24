#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (input[i] - 'A' >= 0 && input[i] - 'A' <= 25) {
			if (input[i] - 'A' <= 12) {
				input[i] += 13;
			}
			else
				input[i] -= 13;
		}
		else if (input[i] - 'a' >= 0 && input[i] - 'a' <= 25) {
			if (input[i] - 'a' <= 12) {
				input[i] += 13;
			}
			else
				input[i] -= 13;
		}
		else
			continue;
	}
	cout << input;
}