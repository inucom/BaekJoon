#include <iostream>
using namespace std;
int ans[10001] = { 0, };

int main() {
	int t, prime;
	cin >> t;
	//int as1,as2 ;
	for (int j = 2; j < 10001; j++) {
		ans[j] = j;
	}
	for (int i = 0; i < t; i++) {
		cin >> prime;

		for (int j = 2; j <= prime; j++) {
			if (ans[j] == 0)
				continue;
			for (int k = 2 * j; k <= prime; k += j) {
				ans[k] = 0;
			}
		}
		if (prime % 2 == 0) {
			for (int j = 0; j <= (prime / 2); j++) {
				if ((ans[prime / 2 - j] != 0) && (ans[prime / 2 + j] != 0)) {
					cout << ans[prime / 2 - j] << " " << ans[prime / 2 + j] << "\n";
					break;
				}
			}
		}
		else {
			for (int j = 0; j <= (prime / 2) + 1; j++) {
				if ((ans[prime / 2 + 1 - j] != 0) && (ans[prime / 2 + 1 + j] != 0)) {
					cout << ans[prime / 2 + 1 - j] << " " << ans[prime / 2 + 1 + j] << "\n";
					break;
				}
			}
		}

		/*as1 = -1;
		for (int j = 2; j <= prime; j++) {
			for (int k = j; k<=prime;k++){
				if (ans[j] != 0 && ans[k] != 0) {
					if (ans[j] + ans[k] == prime) {
						if (ans[j] > as1) {
							as1 = ans[j];
							as2 = ans[k];
						}


					}
				}

			}
		}*/
	}
}