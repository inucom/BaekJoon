#include <iostream>
using namespace std;
int arr[5];
int main() {
	int l, p;
	cin >> l >> p;
	int a;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		arr[i] = arr[i] - l * p;
		
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}