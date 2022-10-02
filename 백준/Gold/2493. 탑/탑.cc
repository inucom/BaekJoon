#include <iostream>
#include <stack>
using namespace std;
int arr[500001];
int ans[500001];
int main() {
	stack<int>tower;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
	}
	for (int i = 0; i < n; i++) {
		while (!tower.empty() && arr[tower.top()] < arr[i]) {
			tower.pop();
		}
		if (tower.empty()) {
			ans[i] = -1;
		}
		else {
			ans[i] = tower.top();
		}
		tower.push(i);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i]+1 << ' ';
	}
}

//첫번째는 무조건 0
//뒤에오는게 앞보다 작으면 ans에 저장