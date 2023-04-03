#include <iostream>
#include <string>

using namespace std;

int checkArr[2];

int main() {
	string str;
	cin >> str;
	bool check = false;
	for (int i = 1; i < str.length(); i++) {
		if (str[i] != str[i - 1]) {
			checkArr[check]++;
			check = !check;
		}
	}
	cout << checkArr[0];
}