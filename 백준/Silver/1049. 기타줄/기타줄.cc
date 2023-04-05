#include <iostream>
#include <algorithm>
using namespace std;


pair<int, int>gt[51];

int main() {
	int n, m;
	cin >> n >> m;
	int s, o;
	int mins = 1001, mino= 1001;
	for (int i = 0; i < m; i++) {
		cin >> s >> o;
		if (s < mins) {
			mins = s;
		}
		if (o < mino) {
			mino = o;
		}
	}
	if (n <= 6) {
		int ans;

		int tmp2 = mins;
		int tmp3 = mino * n;
		if (tmp2 > tmp3) {
			ans = tmp3;
		}
		else
			ans = tmp2;

		cout << ans;
	}
	else {
		int arr[3];
		arr[0] = (n / 6) * mins + (n % 6) * mino;
		arr[1] = (n / 6 + 1) * mins;
		arr[2] = n * mino;
		cout << min({arr[0],arr[1],arr[2]});
	}

}