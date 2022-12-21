#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	regex pattern("(100+1+|01)+");
	if (regex_match(input, pattern)) {
		cout << "SUBMARINE";
	}
	else
		cout << "NOISE";
}