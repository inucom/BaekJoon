#include <iostream>
#include <string>
using namespace std;
int alpha[26] = { 0 };
int main() {
	string input;
	cin >> input;
	int n = input.length();
	for(int i = 0 ; i< n ; i++){
		alpha[input[i] - 'A']++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] % 2 != 0) {
			cnt++;
		}
		if (cnt >= 2) {
			cout << "I'm Sorry Hansoo";
			exit(0);
		}
	}
	string ans = "";
	int add= -1;
	for (int i = 0; i < 26; i++) {
		char ch = i + 'A';
		if (alpha[i] % 2 != 0) {
			for (int j = 0; j < alpha[i] / 2; j++) {
				ans.push_back(ch);
			}
			add = i;
		}
		else if (alpha[i] % 2 == 0) {
			for (int j = 0; j < alpha[i] / 2; j++) {
				ans.push_back(ch);
			}
		}
	}
	if (add != -1)
		cout << ans << char(add + 'A');
	else
		cout << ans;
	for (int i = ans.length()-1; i >=0; i--) {
		cout << ans[i];
	}
}