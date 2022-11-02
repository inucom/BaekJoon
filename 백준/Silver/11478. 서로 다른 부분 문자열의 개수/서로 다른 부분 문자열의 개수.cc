#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
	string input;
	cin >> input;
	set<string> dict;
	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < input.length(); j++) {
			dict.insert(input.substr(i, j));
		}
	}
	cout << dict.size();
}