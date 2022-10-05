#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
priority_queue<int,vector<int>,greater<int>>que;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int n2 = pow(n, 2);
	int a, cnt =0;
	for (int i = 0; i < n2; i++) {
		cin >> a;
		int b;
		if (!que.empty()) {
			b = que.top();
		}
		if (cnt < n) {
			que.emplace(a);
			cnt++;
			//cout << a<<"삽입 ";
		}
		else if (cnt >= n&& a>b) {
			int c = que.top();
			que.pop();
			//cout << c << "삭제 ";
			que.emplace(a);
			//cout << a << "삽입 ";
			
		}
		
	}
	cout << que.top();
}