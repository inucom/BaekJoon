#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int arrA[26], arrB[26];
int main() {
	string inputA, inputB;
	cin >> inputA >> inputB;
	int a = inputA.length();
	int b = inputB.length();
	for (int i = 0; i < a; i++) {
		arrA[inputA[i] - 'a']++;
	}
	for (int i = 0; i < b; i++) {
		arrB[inputB[i] - 'a']++;
	}
	int ans = 0;
	for (int i = 0; i < 26; i++) {
		ans += abs(arrA[i] - arrB[i]);
	}
	cout << ans;
}