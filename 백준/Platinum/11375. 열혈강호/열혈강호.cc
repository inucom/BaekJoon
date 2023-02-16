#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000;
vector<int> adj[MAX + 1]; // 인접 리스트
int A[MAX + 1], B[MAX + 1]; // 매칭된 정점 저장 배열
bool visited[MAX + 1]; // 각 정점의 방문 여부

// A 그룹의 정점과 B 그룹의 정점을 매칭시키는 함수
bool dfs(int a) {
    visited[a] = true;
    for (int b : adj[a]) {
        if (B[b] == -1 || (!visited[B[b]] && dfs(B[b]))) {
            A[a] = b;
            B[b] = a;
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    // 초기화
    fill(A, A + n + 1, -1);
    fill(B, B + m + 1, -1);

    // 인접 리스트 생성
    for (int i = 1; i <= n; i++) {
        int cnt;
        cin >> cnt;
        for (int j = 0; j < cnt; j++) {
            int x;
            cin >> x;
            adj[i].push_back(x);
        }
    }

    int matching = 0; // 최대 매칭 개수
    for (int i = 1; i <= n; i++) {
        if (A[i] == -1) { // 매칭이 안 된 정점일 경우에만 dfs 수행
            fill(visited, visited + n + 1, false);
            if (dfs(i)) matching++;
        }
    }

    cout << matching << '\n';
    return 0;
}