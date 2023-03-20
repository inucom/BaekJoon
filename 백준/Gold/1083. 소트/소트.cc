#include <iostream>
using namespace std;
int a[51];

int n;


void bubbleSort(int t) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int fmax = a[i];
		int index = i;
		for (int j = i+1; j < n && j<=i+t-cnt;j++) {
			if (fmax < a[j]) {
				fmax = a[j];
				index = j;
			}
		}
		for (int j = index; j > i; j--) {
			if (a[j] > a[j - 1]) {
				cnt++;
				swap(a[j], a[j - 1]);
			}
			if (cnt == t) {
				return;
			}
		}
	}
}

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int t;
	cin >> t;
	bubbleSort(t);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}