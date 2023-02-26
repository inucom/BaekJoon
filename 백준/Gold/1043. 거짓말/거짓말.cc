#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> truth(n + 1); // 진실을 아는 사람을 표시하는 배열
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        truth[x] = true;
    }

    vector<vector<int>> parties(m);
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++) {
            int x;
            cin >> x;
            parties[i].push_back(x);
        }
    }

    vector<vector<int>> adj(n + 1); // 그래프를 인접리스트로 나타내기 위한 2차원 벡터
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < parties[i].size(); j++) {
            for (int k = j + 1; k < parties[i].size(); k++) {
                adj[parties[i][j]].push_back(parties[i][k]); // 파티에 참여한 사람끼리 연결된 그래프 생성
                adj[parties[i][k]].push_back(parties[i][j]);
            }
        }
    }

    vector<bool> visited(n + 1);
    for (int i = 1; i <= n; i++) {
        if (truth[i]) { // 진실을 아는 사람은 방문할 필요 없음
            visited[i] = true;
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                int x = q.front();
                q.pop();
                for (int j = 0; j < adj[x].size(); j++) {
                    int y = adj[x][j];
                    if (!visited[y]) {
                        visited[y] = true;
                        q.push(y);
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        bool canLie = true;
        for (int j = 0; j < parties[i].size(); j++) {
            if (visited[parties[i][j]]) { // 진실을 아는 사람이 있다면 거짓말 못함
                canLie = false;
                break;
            }
        }
        if (canLie) ans++;
    }
    cout << ans << endl;

    return 0;
}
