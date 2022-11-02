#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int ans = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'a')
			ans++;
		else if (input[i] == 'e')
			ans++;
		else if (input[i] == 'i')
			ans++;
		else if (input[i] == 'o')
			ans++;
		else if (input[i] == 'u')
			ans++;
		
	}
	cout << ans;
}