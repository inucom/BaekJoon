#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string arr[1001];
int main() {
	string input;
	cin >> input;
	int n = input.length();
	for (int i = 0; i < n; i++) {
		arr[i] = input.substr(n - 1 - i, i+1);
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
}