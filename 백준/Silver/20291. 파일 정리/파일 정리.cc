#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
	int n;
	cin >> n;
	map<string, int> files;
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		input = input.substr(input.find('.') + 1);
		files[input]++;
	}
	for (auto it = files.begin(); it != files.end(); it++) {
		cout << it->first << " " << it->second << "\n";
	}
}