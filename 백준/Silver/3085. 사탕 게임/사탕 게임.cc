#include <iostream>
using namespace std;

char arr[51][51];
int n, ans = 0;

void solve() {
	int check = 0;
	for (int i = 0; i < n; i++) {
		check = 0;
		for (int j = 0; j < n-1; j++) {
			if (arr[i][j] == arr[i][j + 1]) {
				check++;
			}
			else {
				check = 0;
			}
			if (check > ans) {
				ans = check;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		check = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == arr[j+1][i]) {
				check++;
			}
			else {
				check = 0;
			}
			if (check > ans) {
				ans = check;
			}
		}
	}
}


int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	//행
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			swap(arr[i][j], arr[i][j + 1]);
			solve();
			swap(arr[i][j + 1], arr[i][j]);
		}
	}
	//열
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n; j++) {
			swap(arr[i][j], arr[i+1][j]);
			solve();
			swap(arr[i+1][j], arr[i][j]);
		}
	}
	cout << ans+1;
}