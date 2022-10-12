#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	int n, m;
	int input;
	for (int i = 0; i < t; i++) {
		vector<int> dic;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> input;
			dic.push_back(input);
		}
		cin >> m;
		sort(dic.begin(), dic.end());
		for (int i = 0; i < m; i++) {
			cin >> input;
			cout << binary_search(dic.begin(), dic.end(), input) << '\n';
		}
	}
}