#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string input;
	cin >> input;
	int a =0, b=0;
	for (int i = 0; i < n; i++) {
		if (input[i] == 'A') {
			a++;
		}
		else
			b++;
	}
	if (a < b) {
		cout << "B";
	}
	else if (a > b) {
		cout << "A";
	}
	else
		cout << "Tie";

}