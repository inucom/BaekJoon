#include <iostream>
#include <algorithm>
using namespace std;
int a[50], b[50];
bool cmp(int a , int b) {
	return a > b;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n, cmp);
	int sum = 0; 
	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	cout << sum;
}