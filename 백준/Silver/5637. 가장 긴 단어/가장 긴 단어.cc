#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word, ans = "", ans2;
	int max = 0;
	while(1){
		cin >> word;
		if (word == "E-N-D")
			break;
		for (int i = 0; i < word.length(); i++) {
			if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || word[i] == '-') {
				ans += word[i];
			}
		}
		if (ans.length() > max) {
			max = ans.length();
			ans2 = ans;
		}
		ans = "";
	}
	for (int i = 0; i < ans2.length(); i++) {
		if (ans2[i] >= 'A' && ans2[i] <= 'Z') {
			ans2[i] += 32;
		}
	}
	cout << ans2;
}