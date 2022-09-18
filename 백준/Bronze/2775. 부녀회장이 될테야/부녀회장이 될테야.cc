#include <iostream>
using namespace std;
//int sum(int a[], int i, int j) {
//	int sum1 = 0;
//	for (int h = 0; h < j; i++) {
//		sum1 += a[i][h];
//	}
//}
int main() {
	int t;
	cin >> t;
	int k, n, ans[15][15];
		for (int i = 0; i < t; i++) {
			cin >> k;
			cin >> n;
			for (int i = 0; i <= n; i++) {
				ans[0][i] = i+1;
			}
			for (int i = 0; i <= k; i++) {
				ans[i][0] = 1;
			}
			for (int i = 1; i <= k; i++) {
				for (int j = 1; j <= n; j++) {
					ans[i][j] = ans[i][j - 1] + ans[i - 1][j];

				}
			}
			cout << ans[k][n-1]<<"\n";
		}
}