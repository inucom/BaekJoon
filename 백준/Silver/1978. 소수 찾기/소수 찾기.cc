#include <iostream>
using namespace std;
int main() {
	int n, num, cnt,ans = 0;
	cin >> n;
	for (int i = 0 ;i<n;i++){
		cin >> num;
		cnt = 0;
		if (num == 2 || num ==3) {
			ans++;
		}
		else if (num == 1) {
			cnt++;
		}
		else {
			for (int j = 2; j <= num / 2; j++) {
				if (num % j == 0) {
					cnt++;
					break;
				}
			}
			if (cnt == 0) {
				ans++;
			}
		}
	}
	cout << ans;
}