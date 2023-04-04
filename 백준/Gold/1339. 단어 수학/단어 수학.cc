#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[26];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			arr[str[j] - 'A'] += pow(10, str.length() - 1 - j);
		}
	}
	sort(arr, arr + 26, greater<int>());
	int index = 0;
	int ans = 0;
	while (arr[index] != 0) {
		ans += arr[index] * (9 - index);
		index++;
	}
	cout << ans;
}