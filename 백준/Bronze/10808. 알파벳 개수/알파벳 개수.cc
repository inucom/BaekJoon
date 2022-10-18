#include <iostream>
#include <string>
int arr[26];
using namespace std;
int main() {
	string input;
	cin >> input;
	int n = input.length();
	for (int i = 0; i < n; i++) {
		arr[input[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}

}