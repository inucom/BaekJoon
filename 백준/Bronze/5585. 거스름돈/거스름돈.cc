#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	n = 1000 - n;
	int cnt = 0;
	cnt += n / 500;
	n = n - 500 * (n / 500);
	cnt += n / 100;
	n = n - 100 * (n / 100);
	cnt += n / 50;
	n = n - 50 * (n / 50);
	cnt += n / 10;
	n = n - 10 * (n / 10);
	cnt += n / 5;
	n = n - 5 * (n / 5);
	cnt += n / 1;
	n = n - 1 * (n / 1);
	cout << cnt;
}