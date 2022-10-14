#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	int n = input.length();
	for (int i = 0; i <= n / 10; i++) {
		cout << input.substr(i*10,10 )<<'\n';
	}
}