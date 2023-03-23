#include <iostream>
using namespace std;

long long arr[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, n;
	cin >> t;
	arr[0] = 0;
	for (int i = 1; i <= 1000000; i++) {
		arr[i] += arr[i - 1];
		for (int j = i ; j <= 1000000; j += i) {
			arr[j] += i;
		}
	}
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n] << "\n";
	}
	
}