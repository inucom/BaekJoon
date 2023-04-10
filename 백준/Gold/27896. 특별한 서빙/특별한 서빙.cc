#include <iostream>
#include <queue>

using namespace std;



int main() {
	int n, m;
	cin >> n >> m;

	priority_queue<int> pq;
	int claim = 0, input, ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> input;
		claim += input;
		pq.push(input);
		if (claim >= m) {
			claim -= pq.top() * 2;
			pq.pop();
			ans++;
		}

	}
	cout << ans;
}