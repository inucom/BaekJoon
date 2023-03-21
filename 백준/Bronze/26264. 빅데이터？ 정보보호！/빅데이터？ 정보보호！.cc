#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string input;
	cin >> input;
	int s = 0, d = 0;
	for (int i= 0; i < input.length(); i++) {
		if (input[i] == 's') {
			s++;
		}
		if (input[i] == 'd') {
			d++;
		}
	}
	if (s > d) {
		cout << "security!";
	}
	if (s < d) {
		cout << "bigdata?";
	}
	if (s == d) {
		cout << "bigdata? security!";
	}
}