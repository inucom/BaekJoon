#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int n, m;
vector<int> arr;
vector<int> selected;

void dfs(set<vector<int>>& s, int cnt, int prev) {
    if (cnt == m) {
        if (s.find(selected) == s.end()) {
            s.insert(selected);
            for (int num : selected) {
                cout << num << " ";
            }
            cout << '\n';
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        if (prev <= arr[i]) {
            selected.push_back(arr[i]);
            dfs(s, cnt + 1, arr[i]);
            selected.pop_back();
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    set<vector<int>> s;
    dfs(s, 0, 0);

    return 0;
}
