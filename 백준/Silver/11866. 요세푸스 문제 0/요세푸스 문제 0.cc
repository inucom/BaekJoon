#include <iostream>
#include <queue>
using namespace std;
queue<int> jose;
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		jose.push(i);
	}
	int a;
	cout << "<";
	while (jose.empty() != 1) {
		for (int i = 0; i < k-1; i++) {
			a = jose.front();
			jose.pop();
			jose.push(a);
		}
		a = jose.front();
		jose.pop();
		cout << a;
		if (jose.empty() != 1) { cout << ", "; }
	}
	cout << ">";
}