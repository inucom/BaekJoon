#include <iostream>

using namespace std;

int N, M, K;
int arr[11][11];
bool visited[11][11];
int ans = -100000;


void backTracks(int cnt, int sum) {
	if (cnt == K) {
		if( sum > ans)
		ans = sum;
		return;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (visited[i][j])
				continue;
			if (visited[i+1][j] && i+1 <N)
				continue;
			if (visited[i-1][j] && i-1 >= 0)
				continue;
			if (visited[i][j+1] && j+1 < M)
				continue;
			if (visited[i][j-1] && j-1 >= 0)
				continue;
			visited[i][j] = true;
			backTracks(cnt + 1, sum + arr[i][j]);
			visited[i][j] = false;
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	backTracks(0, 0);
	cout << ans;
}