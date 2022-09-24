#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque<int> ans;
	int n, a;
	cin >> n;
	string order;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push_front") {
			cin >> a;
			ans.push_front(a);
		}
		else if (order == "push_back") {
			cin >> a;
			ans.push_back(a);
		}
		else if (order == "pop_front")
		{
			if (ans.empty() == 1) {
				cout << -1 << "\n";
				continue;
			}
			cout << ans.front() << '\n';
			ans.pop_front();
		}
		else if (order == "pop_back")
		{
			if (ans.empty() == 1) {
				cout << -1 << "\n";
				continue;
			}
			cout << ans.back() << '\n';
			ans.pop_back();
		}
		else if (order == "size")
			cout << ans.size() << '\n';
		else if (order == "empty") {
			cout << ans.empty() << '\n';
		}
		else if (order == "front") {
			if (ans.empty() == 1) {
				cout << -1 << "\n";
				continue;
			}
			else
				cout << ans.front() << '\n';
		}
		else if (order == "back") {
			if (ans.empty() == 1) {
				cout << -1 << "\n";
				continue;
			}
			else
				cout << ans.back() << '\n';
		}

	}
}