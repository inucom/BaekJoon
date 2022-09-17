#include <iostream>
#include <cstring>


using namespace std;
#define max 1000001
int main() {
	char c[max], ch;
	int n[26] = { 0 };
	int  m = 0;
	cin >> c;
	int k = strlen(c);
	int i;
	for (i = 0; i < k; i++) {
		if (96 < c[i] && c[i] < 123)
			c[i] = c[i] - 32;
		n[c[i] - 65]++;
	}
	for (i = 0; i < 26; i++) {
		if (n[i] > m) {
			m = n[i];
			ch = i + 65;
		}
		else if (n[i] == m)
			ch = '?';
	}

	cout << ch;
}
