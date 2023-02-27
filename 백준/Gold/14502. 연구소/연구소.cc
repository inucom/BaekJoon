#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX = 8;
int N, M;
int map[MAX][MAX];
int tmp[MAX][MAX];
bool visited[MAX][MAX];
int ans;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void bfs() {
    queue<pair<int, int>> q;

    // tmp 배열 초기화
    memcpy(tmp, map, sizeof(map));

    // 방문 배열 초기화
    memset(visited, false, sizeof(visited));

    // 바이러스가 있는 위치 큐에 삽입
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tmp[i][j] == 2) {
                q.push(make_pair(i, j));
                visited[i][j] = true;
            }
        }
    }

    // 바이러스 퍼뜨리기
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
            if (visited[ny][nx]) continue;
            if (tmp[ny][nx] == 0) {
                tmp[ny][nx] = 2;
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
            }
        }
    }

    // 안전 영역 크기 계산
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tmp[i][j] == 0) {
                cnt++;
            }
        }
    }

    ans = max(ans, cnt);
}

void dfs(int cnt) {
    if (cnt == 3) {
        bfs();
        return;
    }

    // 벽 세우기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 0) {
                map[i][j] = 1;
                dfs(cnt + 1);
                map[i][j] = 0;
            }
        }
    }
}

int main() {
    // 입력
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    // 벽 세우기(dfs)
    dfs(0);

    // 출력
    cout << ans << endl;

    return 0;
}
