#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main() {
	int n, m, tmp;
	cin >> n >> m;
	deque<int> que;
	deque<int> save;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		que.push_back(i);
		sum += i;
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		save.push_back(tmp);
	}
	int ans = 0;
	while (true) {
		int a;
		if (save.empty() == 1)
			break;
		auto d = find(que.begin(), que.end(), save[0]);
		if (que.front() ==save.front()) {
			que.pop_front();
			save.pop_front();
			continue;
		}
		else if (d-que.begin() <= que.size() / 2) {
			while (1) {
				a = que.front();
				que.pop_front();
				que.push_back(a);
				ans++;
				if (que.front() == save.front())
					break;
			}
		}
		else {
			while (1) {
				a = que.back();
				que.pop_back();
				que.push_front(a);
				ans++;
				if (que.front() == save.front())
					break;
			}
		}
	}
	cout << ans;
}