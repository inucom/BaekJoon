#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int num[100000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n;
	cin >> t;
	string order;
	string arr, ans;
	for (int i = 0; i < t; i++) {
		cin >> order;
		cin >> n;
		cin >> arr;
		arr.resize(arr.length() - 1);
		int start = 1;
		deque<int> que;
		while (true) {
			ans = "0";
			int findex = arr.find(',', start);
			if (findex == -1) {
				string part = arr.substr(start);
				if (part == "") break;
				int a = stoi(part);
				que.push_back(a);
				break;
			}
			int count = findex - start;
			string part = arr.substr(start, count);
			int a = stoi(part);
			que.push_back(a);
			start = findex + 1;
		}
		int r = 0;
		for (int j = 0; j < order.length(); j++) {
			if (order[j] == 'R') {
				r++;
			}
			else if (order[j] == 'D') {
				if (que.empty() == 1) {
					ans = "error";
					break;
				}
				if (r % 2 == 0)
					que.pop_front();
				else
					que.pop_back();
			}
		}
		if (ans == "error") {
			cout << ans << '\n';
			continue;
		}
		int l = 0, cnt = 0;
		while (que.empty() != 1) {
			int a = que.front();
			que.pop_front();
			num[l] = a;
			l++;
			cnt++;
		}
			cout << '[';
			if (r % 2 == 0) {
				for (int j = 0; j < cnt; j++) {
					cout << num[j];
					if (j == cnt - 1)
						break;
					cout << ',';
				}
			}
			else {
				for (int j = cnt-1; j >= 0; j--) {
					cout << num[j];
					if (j == 0)
						break;
					cout << ',';
				}
			}
			cout << ']' << '\n';
		}
	}

