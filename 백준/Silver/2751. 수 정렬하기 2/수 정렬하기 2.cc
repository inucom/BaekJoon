#include <iostream>
#include <algorithm>
using namespace std;
int k[1000000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	sort(k, k + n);
	for (int i = 0; i < n; i++) {
		cout << k[i]<<"\n";
	}
}