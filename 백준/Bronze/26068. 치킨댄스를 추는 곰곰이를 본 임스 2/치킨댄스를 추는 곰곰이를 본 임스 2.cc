#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string input;
	int cnt = 0,aa;
	for (int i = 0; i < n; i++) {
		cin >> input;
		
		aa = 0;
		for (int j = 2; j < input.length(); j++) {
			aa *= 10;
			aa += input[j] - '0';
		}
		if (aa <= 90) {
			cnt++;
		}
	}
	cout << cnt;
}