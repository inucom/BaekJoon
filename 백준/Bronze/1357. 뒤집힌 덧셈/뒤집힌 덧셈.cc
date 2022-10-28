#include <iostream>
#include <string>
using namespace std;
string Rev(string input) {
	for (int i = 0; i < input.length() / 2; i++) {
		char tmp = input[i];
		input[i] = input[input.length() - 1 - i];
		input[input.length() - 1 - i] = tmp;

	}
	return input;
	
}
int main() {
	string aput, bput;
	cin >> aput >> bput;
	string a = Rev(aput);
	string b = Rev(bput);
	int c = stoi(a) + stoi(b);
	cout << stoi(Rev(to_string(c)));
}