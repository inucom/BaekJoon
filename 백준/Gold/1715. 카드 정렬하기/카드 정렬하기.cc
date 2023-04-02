#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		q.push(input);
	}
	int ans = 0;
	while (q.size() != 1) {
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		int c = a + b;
		ans += c;
		q.push(c);
	}
	cout << ans;

}
