#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	int fnum; 
	for (int i = 0; i < m; i++) {
		cin >>fnum;
		cout<<binary_search(arr, arr + n, fnum)<<"\n";
	}
}