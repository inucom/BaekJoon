#include <iostream>
#include <algorithm>
using namespace std;

int Parr[51], Marr[51];

int main() {
	int n;
	cin >> n;
	int minus = 0, plus = 0, zero=0,input;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input < 0) {
			Marr[minus] = input;
			minus++;

		}
		else if (input == 0) {
			zero++;
		}
		else {
			if (input == 1) {
				ans++;
			}
			else {
				Parr[plus] = input;
				plus++;
			}
		}
	}
	
	sort(Parr, Parr + plus);
	sort(Marr, Marr + minus);
	for (int i = plus - 1; i >= 1; i -= 2) {
		ans += Parr[i] * Parr[i - 1];
	}
	for (int i = 0; i < minus-1; i+=2) {
		ans += Marr[i] * Marr[i +1];
	}
	if (minus % 2 == 1 && zero == 0) {
		ans += Marr[minus - 1];
	}
	if (plus % 2 == 1) {
		ans += Parr[0];
	}
	cout << ans;
}