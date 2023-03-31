#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int index = 0, num = 0;
	int ans = 0;
	bool check = false;
	str += '+';
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '+' || str[i] == '-') {
			if (check == false) {
				ans += num;
				num = 0;
			}
			else {
				ans -= num;
				num = 0;
			}
		}
		else{
			num = num * 10 + (str[i] - '0');
		}
		if (str[i] == '-') {
			check = true;
		}
	}
	cout << ans;
}