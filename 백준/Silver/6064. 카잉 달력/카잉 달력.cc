#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int M, N, x, y;
	for (int i = 0; i < t; i++) {
		cin >> M >> N >> x >> y;
		int sa = 1, sb = 1, cnt = 1;
		bool check = false;
		while (cnt <= M*N) {
			if (sa == x && sb == y) {
				cout << cnt << "\n";
				check = true;
				break;
			}
			
			if (cnt == 1) {
				cnt += x - sa;
				sa = (sa+cnt-1);
				sb = (sb + cnt-1) % N;

				if (cnt == 1) {
					sa = x;
					sb = (sb + M) % N;
					cnt += M;
				}
				if (sb == 0)
					sb = N;
			}
			else {
				cnt += M;
				sb = (sb + M) % N;
				if (sb == 0)
					sb = N;
			}
			//cout << "sa : sb : cnt " << sa << " " << sb << " " << cnt << "\n";
		}
		if (!check) {
			cout << -1 << '\n';
		}
	}
}