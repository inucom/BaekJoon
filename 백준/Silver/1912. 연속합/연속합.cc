#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int main() {
	arr[0] = 0;
	int n;
	cin >> n;
	int input;
	int smax = -1001;
	for (int i = 1; i <= n; i++) {
		cin >> input;
		arr[i] = max(input + arr[i-1],input);
		if (arr[i] > smax) {
			smax = arr[i];
		}
	}
	cout << smax;
}