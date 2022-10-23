#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	string input;
	for (int i = 0; i < t; i++) {
		getline(cin,input);
		input.append(" ");
		int n = input.length();
		int sp = 0;
		for (int j = 0; j < n; j++) {
			if (input[j] == ' ') {
				for (int k = j - 1; k >= sp; k--) {
					cout << input[k];
				}
				sp = j+1;
				cout << ' ';
			}
		}
		cout << '\n';
	}
}