#include <iostream>
using namespace std;

int arr[5];
int main() {
	int a;
	cin >> a;
	int cnt = 0,b;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		if (b == a)
			cnt++;
	}
	cout << cnt;
}