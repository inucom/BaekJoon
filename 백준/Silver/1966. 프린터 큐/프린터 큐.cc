#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	queue<pair<int,int>> pap;
	priority_queue<int> imp;
	int t;
	pair<int, int> save;
	cin >> t;
	int n, m, pri, cnt;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		cnt = 1;
		for (int j = 0; j < n; j++) {
			cin >> pri;
			pap.push({ j,pri });
			imp.push(pri);
		}
		while (pap.empty() != 1) {
			if (imp.top() == pap.front().second) {
				imp.pop();
				if (pap.front().first == m) {
					cout << cnt << "\n";
					pap = queue<pair<int, int>>();
					imp = priority_queue<int>();
					break;
				}
				pap.pop();
				cnt++;
			}
			else
			{
				save = pap.front();
				pap.pop();
				pap.push(save);
			}
		}
	}
}