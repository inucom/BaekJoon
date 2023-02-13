#include <iostream>
using namespace std;

char arr[10][10];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr[i][j];

	for (int i = 0; i < n; ++i) {
		for (int j = m - 1; j >= 0; --j)
			cout << arr[i][j];
		cout << '\n';
	}
}