#include <iostream>
using namespace std;
int arr[5001] = {0};
int main() {
	int p, q;
	cin >> p >> q;
	int n = 1;
	for (int i = 1; i <= p; i++) {
		if (p% i == 0) {
			arr[n] = i;
			n++;
		}
	}
	if (q > n)
		cout << 0;
	else
	cout << arr[q];
	
}