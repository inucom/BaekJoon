#include <iostream>
#include <string>

using namespace std;

bool alpha[26];
bool check[26];
char result[15];
int cnt = 0;
int l, c;
void backtrack(int cnt, int start) {
	//cout << result<<'\n';
	if (cnt == l) {
		int cons = 0, vow = 0;
		for (int i = 0; i < l; i++) {
			if (result[i] == 'a' || result[i] == 'e' || result[i] == 'i' || result[i] == 'o' || result[i] == 'u') {
				vow++;
			}
			else {
				cons++;
			}

		}
		if (cons >= 2 && vow >= 1) {
			cout << result<<"\n";
		}
		return;
	}
	for (int i = start; i < 26; i++) {
		if (alpha[i] == true && check[i] ==false) {
			result[cnt] = i + 'a';
			check[i] = true;
			backtrack(cnt + 1, i+1);
			check[i] = false;
		}

	}

}

int main() {
	char input;
	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		cin >> input;
		alpha[input - 'a'] = true;
	}
	backtrack(cnt,0);
}