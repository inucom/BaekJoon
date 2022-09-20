#include <iostream>
using namespace std;
int ans[10001] = { 0, };

int main() {
	int t, prime;
	cin >> t;
	
	for (int j = 2; j <= 100; j++) {
		
		for (int k = 2 * j; k <= 10000; k += j) {
			ans[k]++;
		}
	}
	for (int i = 0; i < t; i++) {
		cin >> prime;
		
			for (int j = 0; j <= (prime / 2); j++) {
				if ((ans[prime / 2 - j] == 0) && (ans[prime / 2 + j]== 0)) {
					cout << (prime / 2) - j << " " << (prime / 2) + j << "\n";
					break;
				}
			}
		
	}
}