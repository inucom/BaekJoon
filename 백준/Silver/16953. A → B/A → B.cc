#include <iostream>
using namespace std;

int a, b;
int answer = -1;

void dfs(long long cur, long long cnt) {
    if (cur > b) {
        return;
    }
    if (cur == b) {
        if (answer == -1 || answer > cnt) {
            answer = cnt;
        }
        return;
    }
    dfs(cur * 2, cnt + 1);
    dfs(cur * 10 + 1, cnt + 1);
}

int main() {
    cin >> a >> b;
    dfs(a, 0);
    if (answer == -1) {
        cout << -1;
    }
    else
        cout << answer+1;
}
