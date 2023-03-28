#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int check = n;
	int cnt = 0;
	while (check > 0) {
		check /= 10;
		cnt++;
	}
	//cout << cnt;
	int ans = 0;
	for (int i = 1; i <= cnt - 1; i++) {
		ans += (pow(10, i) - pow(10, i - 1))* i;
		//cout << ans << "\n";
	}
	//cout << ans;
	ans += (n - pow(10, cnt - 1)+1) * cnt;
	cout << ans;
}
//1자리 => 9
//2자리 => 90
//3자리 => 900