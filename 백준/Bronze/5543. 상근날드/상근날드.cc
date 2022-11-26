#include <iostream>
using namespace std;
int main() {
	int input;
	int min = 99999;
	for (int i = 0; i < 3; i++) {
		cin >> input;
		if (input < min) {
			min = input;
		}
	}
	int set, set2;
	cin >> set>>set2;
	int x = (set > set2) ? set2 : set;
	cout << min + x -50;
}