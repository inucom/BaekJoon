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
		for (int j = x-1; j < x+9; j++) {
			for (int k = y-1; k < y+9; k++) {
				if (checkBoard[j][k] == false) {
					checkBoard[j][k] = true;
					ans++;
				}
			}
		}
	}
	cout << ans;
}