#include <iostream>
using namespace std;
int stack[100000];
int main() {
	int k, im, top =-1;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> im;
		if (im != 0) {
			top++;
			stack[top] = im;
		}
		else
			top--;
	}
	int sum = 0;
	for (int i = 0; i < top + 1; i++) {
		sum += stack[i];
	}
	cout << sum;
}