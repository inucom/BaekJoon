#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 2, j = 1;
	if (n < i) {
		cout << 1<<endl;
	}
	else {
		while (true) {
			if (n >= i && n <= i + j * 6 - 1) {
				cout << j + 1;
				break;
			}
			i = i + j * 6;
			j++;
		}
	}
}