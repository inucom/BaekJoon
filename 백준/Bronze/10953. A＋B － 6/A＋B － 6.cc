#include <iostream>	
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	
	string input;
	for (int i = 0; i < t; i++) {
		cin >> input;
		cout << (input[0] - '0') + (input[2] - '0')<<'\n';
	}
}