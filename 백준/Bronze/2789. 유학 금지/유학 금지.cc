#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int n = input.length();
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (input[i] == 'C')
			continue;
		else if (input[i] == 'A')
			continue;
		else if (input[i] == 'M')
			continue;
		else if (input[i] == 'B')
			continue;
		else if (input[i] == 'R')
			continue;
		else if (input[i] == 'I')
			continue;
		else if (input[i] == 'D')
			continue;
		else if (input[i] == 'G')
			continue;
		else if (input[i] == 'E')
			continue;
		else
			ans += input[i];
	}
	cout << ans;
}