#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int num, sum = 0, sum2 = 0;;
	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		sum2 += i;
	}
	cout << sum - sum2;
}