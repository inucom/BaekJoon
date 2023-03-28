#include <iostream>
#include <queue>

using namespace std;
int N, M;
int arr[501][501];

#define down {0, 1}
#define up {0, -1}
#define left {-1, 0}
#define right {1, 0}
#define down2 {0, 2}
#define up2 {0, -2}
#define left2 {-2, 0}
#define right2 {2, 0}

struct pos { int x; int y; };

pos cb[23][3] = {
	{down, down, down},
	{right, right, right},

	{right, down, left},

	{down, down, right},
	{down, down, left},
	{up, up, right},
	{up, up, left},

	{right, right, down},
	{right, right, up},
	{left, left, down},
	{left, left, up},

	{down, left, down},
	{down, right, down},
	{right, up, right},
	{right, down, right},
	{left, up, left},
	{left, down, left},
	{up, left, up},
	{up, right, up},

	{up, left, right2},
	{right, up, down2},
	{down, left, right2},
	{left, up, down2},
};


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < 23; k++) {
				int sum = 0;
				sum += arr[i][j];
				int yy = i;
				int xx = j;
				for (int m = 0; m < 3; m++) {
					yy += cb[k][m].y;
					xx += cb[k][m].x;
					if (yy >= 0 && xx >= 0 && yy < N && xx < M) {
						sum += arr[yy][xx];
						//cout << sum << "\n";
					}
					else {
						sum = 0;
						break;
					}
				}

				if (sum > ans) {
					ans = sum;
				}
			}
		}
	}
	cout << ans;
}