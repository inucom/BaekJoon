#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		string a;
		int b, c;
		
		cin >> a >> b >> c;
		if (a == "#" && b == 0 && c == 0) {
			break;
		}
		if (b <= 17 && c < 80) {
			cout << a << " Junior\n";
		}
		else {
			cout << a << " Senior\n";
		}
	}
}