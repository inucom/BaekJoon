#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int team_count = 0;
    while (n >= 2 && m >= 1 && n + m >= 3 + k) {
        n -= 2;
        m -= 1;
        team_count++;
    }

    cout << team_count << endl;

    return 0;
}


