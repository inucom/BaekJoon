#include <iostream>
#include <string>
using namespace std;
int main() {
	string input[8];
	for (int i = 0; i < 8; i++) {
		getline(cin, input[i]);
	}
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 8; j += 2) {
				if (input[i][j] == 'F') {
					cnt++;
				}
			}
		}
		else {
			for (int j = 1; j < 8; j += 2) {
				if (input[i][j] == 'F') {
					cnt++;
				}
			}
		}
	}
	cout << cnt;
}