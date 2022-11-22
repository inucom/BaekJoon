#include <iostream>
using namespace std;
bool checkBoard[100][100] = { false, };
int main() {
	int n;
	cin >> n;
	int x, y;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x+10; j++) {
			for (int k = y; k < y+10; k++) {
				if (checkBoard[j][k] == false) {
					checkBoard[j][k] = true;
					ans++;
				}
			}
		}
	}
	cout << ans;
}