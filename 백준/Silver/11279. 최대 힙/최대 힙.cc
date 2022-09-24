#include <iostream>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	multiset<int,greater<int>> heap;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0) {
			if (heap.empty() == 1) {
				cout << 0 << '\n';
				continue;
			}
			multiset<int>::iterator iter = heap.begin();
			cout << *iter << '\n';
			heap.erase(iter);
		}
		else
			heap.insert(a);
	}

}