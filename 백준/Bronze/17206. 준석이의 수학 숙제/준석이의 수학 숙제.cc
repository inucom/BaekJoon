#include <iostream>
using namespace std;
int arr[100001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int sum = 0;
	for (int i = 1; i < 100001; i++) {
		if (i % 3 == 0 && i % 7 == 0) sum += i;
		else {
			if (i % 3 == 0) sum += i;
			if (i % 7 == 0) sum += i;
		}
		arr[i] = sum;
	}


	int t;
	cin >> t;
	int input;
	for (int i = 0; i < t; i++) {
		cin >> input;
		cout << arr[input]<<"\n";
	}

}