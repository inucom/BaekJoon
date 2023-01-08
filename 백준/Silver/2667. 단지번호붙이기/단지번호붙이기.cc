#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, num = -1;

int map[26][26], arr[625];
bool visited[26][26];

int arrow[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

void dfs(int x, int y) {
	visited[y][x] = 1;
	arr[num]++;
	for (int i = 0; i < 4; i++) {
		int xx = x + arrow[i][0];
		int yy = y + arrow[i][1];

		if (xx >= 0 && yy >= 0 && xx < n && yy < n) {
			if (!visited[yy][xx] && map[yy][xx] ==  1) {
				dfs(xx, yy);

			}
		}
	}
}


int main() {
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < n; j++) {
			map[i][j] = str[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				num++;
				dfs(j,i);
			}
		}
	}
	cout << num+1 << "\n";
	sort(arr, arr + num + 1);
	for (int i = 0; i < num+1; i++) {
		cout << arr[i] << "\n";
	}
}