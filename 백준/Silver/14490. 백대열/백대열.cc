#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int main() {
	string input;
	cin >> input;
	int arr[2], num = 0;
	int index = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ':') {
			num *= 10;
			num += input[i]-'0';
			continue;
		}
		arr[index] = num;
		num = 0;
		index++;
	}
	arr[index] = num;
	int s =gcd(arr[0], arr[1]);
	cout << arr[0]/s << ":" << arr[1]/s;
}
