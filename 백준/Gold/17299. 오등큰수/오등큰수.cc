#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int cnt[1000001];
int ans[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	stack<int> st;
	for (int i = N - 1; i >= 0; i--) {
		while (!st.empty() && cnt[arr[i]] >= cnt[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			ans[i] = -1;
		}
		else {
			ans[i] = st.top();
		}
		st.push(arr[i]);
	}
	for (int i = 0; i < N; i++) {
		cout << ans[i] << ' ';
	}
}