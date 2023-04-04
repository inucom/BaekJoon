#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string str[11];
int arr[26];

//bool comp(string a, string b) {
//	if (a.length() == b.length())
//		return a.length() > b.length();
//	else
//		return a.length() > b.length();
//}



int main() {
	int n;
	cin >> n;
		for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	//sort(str, str + n, comp);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < str[i].length(); j++) {
			arr[str[i][j] - 'A'] += pow(10, str[i].length() - 1 - j);
		}
	}
	sort(arr, arr + 26, greater<int>());
	//for (int i = 0; i < 26; i++) {
	//	cout << arr[i] << " ";
	//}
	int index = 0;
	int ans = 0;
	while (arr[index] != 0) {
		ans += arr[index] * (9 - index);
		index++;
	}
	cout << ans;
}