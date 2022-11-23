#include <iostream>
using namespace std;
int main() {
	int max = 0, sum = 0;

	int in, out;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		sum += in - out;
		if (sum > max) {
			max = sum;
		}
	}
	cout << max;
}