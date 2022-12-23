#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;
	int num = 0;
	int ans = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ',') {
			num *= 10;
			num += input[i] -'0';
		}
		else
		{
			ans += num;
			
			num = 0;
		}
	}
	ans += num;
	
	num = 0;
	cout << ans;
}