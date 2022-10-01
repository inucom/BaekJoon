#include <iostream>
#include <stack>
using namespace std;
int num[1000001];
int ans[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int>st;
	int n;
	cin >> n;
	int j = 0;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && num[i] >= st.top())
			st.pop();
		if (st.empty()) {
			ans[i] = -1;
		}
		else {
			ans[i] = st.top();
		}
		st.push(num[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
}