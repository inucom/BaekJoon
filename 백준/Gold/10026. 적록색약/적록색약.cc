#include <iostream>
#include <string>
using namespace std;
int n;
string str;
char arr[101][101];
bool visited[101][101];

int arrow[4][2] = { {1,0}, { -1,0} , {0,1},{0,-1} };

void dfs(int x, int y) {
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int xx = x + arrow[i][0], yy = y + arrow[i][1];

		if (xx >= 0 && yy >= 0 && xx < n && yy < n && arr[x][y] == arr[xx][yy] && !visited[xx][yy]) {
			dfs(xx, yy);
		}
	}


}

int main() {
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < n; j++) {
			arr[i][j] = str[j];
		}
	}
	int cnt = 0, ccnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = 0;
			if (arr[i][j] == 'G') arr[i][j] = 'R';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				ccnt++;
			}
		}
	}
	cout << cnt << " " << ccnt;
}