#include <iostream>
#include <vector>

using namespace std;

int N, answer;

bool col[15], diagonal1[30], diagonal2[30];

void dfs(int row) {
    if (row == N) {
        answer++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!col[i] && !diagonal1[row + i] && !diagonal2[row - i + N]) {
            col[i] = diagonal1[row + i] = diagonal2[row - i + N] = true;
            dfs(row + 1);
            col[i] = diagonal1[row + i] = diagonal2[row - i + N] = false;
        }
    }
}

int main() {
    cin >> N;
    dfs(0);
    cout << answer << endl;
    return 0;
}
