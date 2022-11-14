#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	int index;
	string input;
	for (int i = 0; i < t; i++) {
		cin >> index >> input;
		cout << input.substr(0, index - 1) + input.substr(index, input.length())<<"\n";
	}
}