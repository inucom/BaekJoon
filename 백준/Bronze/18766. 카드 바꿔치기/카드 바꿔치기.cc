#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		string arr[201], arr2[201];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		for (int j = 0; j < n; j++) {
			cin >> arr2[j];
		}
		sort(arr, arr + n);
		sort(arr2 , arr2 + n);
		if (equal(arr,arr+n,arr2)){
			cout << "NOT CHEATER\n";
		}
		else
			
		cout << "CHEATER\n";
	}
}