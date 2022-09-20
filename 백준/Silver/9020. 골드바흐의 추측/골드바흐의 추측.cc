//#include <iostream>
//using namespace std;
//
//int main() {
//	int t, prime;
//	cin >> t;
//	int ans[10001] = { 0, };
//	for (int j = 2; j <= 100; j++) {
//		for (int k = 2 * j; k <= 10000; k += j) {
//			ans[k]++;
//		}
//	}
//	for (int i = 0; i < t; i++) {
//		cin >> prime;
//			for (int j = 0; j <= (prime / 2); j++) {
//				if ((ans[prime / 2 - j] == 0) && (ans[prime / 2 + j]== 0)) {
//					cout << (prime / 2) - j << " " << (prime / 2) + j << "\n";
//					break;
//				}
//			}
//	}
//}
#include<stdio.h>

int main() {

	int n, i, j, T;
	int arr[10001] = { 1, };

	for (i = 2; i <= 100; i++) {
		for (j = i * i; j <= 10000; j += i) arr[j]++;
	}

	scanf("%d", &T);

	while (T--) {
		scanf("%d", &n);
		for (i = j = n / 2;; i++, j--) {
			if (!arr[i] && !arr[j]) {
				printf("%d %d\n", j, i);
				break;
			}
		}
	}
}
//int as1,as2 ;
	/*for (int j = 2; j < 10001; j++) {
		ans[j] = j;
	}*/
/*if (ans[j] == 0)
			continue;*/
//if (prime % 2 == 0) {
			/*for (int j = 0; j <= (prime / 2); j++) {
				if ((ans[prime / 2 - j] != 0) && (ans[prime / 2 + j] != 0)) {
					cout << ans[prime / 2 - j] << " " << ans[prime / 2 + j] << "\n";
					break;
				}
			}*/
//}
		/*else {
			for (int j = 0; j <= (prime / 2) + 1; j++) {
				if ((ans[prime / 2 + 1 - j] != 0) && (ans[prime / 2 + 1 + j] != 0)) {
					cout << ans[prime / 2 + 1 - j] << " " << ans[prime / 2 + 1 + j] << "\n";
					break;
				}
			}
		}*/
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