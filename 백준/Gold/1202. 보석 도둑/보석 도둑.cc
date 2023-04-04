#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

pair<int, int> jewel[300001];
int bag[300001];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	int m, v;
	for (int i = 0; i < n; i++) {
		cin >> m >> v;
		jewel[i] = { m,v };
	}
	sort(jewel, jewel + n);
	for (int i = 0; i < k; i++) {
		cin >> bag[i];
	}
	sort(bag, bag + k);
	priority_queue <int> pq;
	int index = 0;
	long long ans = 0;
	for (int i = 0; i < k; i++) {
		while (jewel[index].first <= bag[i]) {
			pq.push(jewel[index].second);
			index++;
		}
		if (!pq.empty()) {
			ans += pq.top();
			pq.pop();
		}

	}
	cout << ans;
}
