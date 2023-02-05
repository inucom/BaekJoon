#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[6];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	int a, b;
	cin >> a>>b;
	sort(arr, arr + 4);
	
	if (a > b)
		b = a;
	cout <<arr[1] + arr[2] + arr[3] + b;
}