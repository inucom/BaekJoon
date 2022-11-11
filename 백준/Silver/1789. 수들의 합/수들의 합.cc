#include <iostream>
using namespace std;
int main() {
	long long S;
	cin >> S;
	long long sum = 0, i =0;
	while (true) {
		i++;
		sum += i;
		if (sum > S)
			break;
	}
	cout << i-1;
}