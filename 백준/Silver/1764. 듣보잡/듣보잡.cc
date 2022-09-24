#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
string ans[100000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, cnt = 0;
	cin >> n >> m;
	string name;
	set<string> person;
	for (int i = 0; i < n + m; i++) {
		cin >> name;
		if (person.find(name) == person.end()) {
			person.insert(name);
		}
		else {
			ans[cnt] = name;
			cnt++;
		}
	}
	cout << cnt<< '\n';
	sort(ans, ans + cnt);
	for (int i = 0; i < cnt; i++) {
		cout << ans[i] << '\n';
	}
}