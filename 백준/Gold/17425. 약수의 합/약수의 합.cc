#include <iostream>
using namespace std;

long long arr[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	int n;
	arr[1] = 1;

	for (int i = 2; i <= 1000000; i++) {
		arr[i] += 1 + arr[i - 1];
		for (int j = i ; j <= 1000000; j += i) {
			arr[j] += i;
		}
	}
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n] << "\n";
	}
	
}