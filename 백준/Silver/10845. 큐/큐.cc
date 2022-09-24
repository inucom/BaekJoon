#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int>que;
	int n;
	cin >> n;
	int a;
	string order;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> a;
			que.push(a);
		}
		if (order == "pop") {
			if (que.empty() == 1) {
				cout << -1 << '\n';
				continue;
			}
			a = que.front();
			que.pop();
			cout << a << "\n";
		}
		if (order == "size") {
			cout << que.size()<<'\n';
		}
		if (order == "empty") {
			cout << que.empty() << "\n";
		}
		if (order == "front") {
			if (que.empty() == 1) {
				cout << -1 << '\n';
				continue;
			}
			cout << que.front()<<'\n';
		}
		if (order == "back") {
			if (que.empty() == 1) {
				cout << -1 << '\n';
				continue;
			}
			cout << que.back()<< '\n';
		}
	}



}