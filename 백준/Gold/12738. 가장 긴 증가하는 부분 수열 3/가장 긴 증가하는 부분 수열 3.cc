#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		int pos = lower_bound(arr, arr + ans, input) - arr;
		
		if (ans == 0) {
			arr[ans] = input;
			ans++;
		}
		else if (pos < ans) {
			arr[pos] = input;
		}
		else if(pos == ans) {
			arr[pos] = input;
			ans++;
		}
		//cout << "ans : " << ans << "\npos : " << pos << "\n";
	}
	//cout << "array";
	//for (int i = 0; i < ans; i++) {
	//	cout << arr[i] << "-";
	//}
	cout << ans;
}