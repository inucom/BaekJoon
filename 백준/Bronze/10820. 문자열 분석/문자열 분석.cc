#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	while (getline(cin, input)) {
		int s = 0, b = 0, n = 0, e = 0;
		
		for (int i = 0; i < input.length(); i++) {
			if (input[i] <= 'Z' && input[i] >= 'A') {
				b++;
			}
			else if (input[i] <= 'z' && input[i] >= 'a') { s++; }
			else if (input[i] <= '9' && input[i] >= '0') { n++; }
			else if (input[i] == ' ')e++;

		}
		cout << s << " " << b << " " << n << " " << e << '\n';
	}
}