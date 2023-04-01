#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	int max = arr[0] * N;
	for (int i = 1; i < N; i++) {
		if (arr[i] * (N - i) > max) {
			max = arr[i] * (N-i);
			//cout << max << "\n";
		}
	}
	cout << max;
}