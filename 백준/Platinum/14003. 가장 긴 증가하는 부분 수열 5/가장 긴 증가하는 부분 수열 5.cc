#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];
int inputarr[1000001];
int dparr[1000001];
int position[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 0, tmpans = 0;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		inputarr[i] = input;
		int pos = lower_bound(arr, arr + ans, input) - arr;

		if (ans == 0) {
			arr[ans] = input;
			ans++;
		}
		else if (pos < ans) {
			arr[pos] = input;
		}
		else if (pos == ans) {
			arr[pos] = input;
			ans++;
		}
		position[i] = pos;
		//cout << "ans : " << ans << "  pos : " << pos << "  input : "<<input<<"\n";
		//cout << "array ";
		//for (int i = 0; i < ans; i++) {
		//	cout << arr[i] << " || ";
		//}
		//cout << "\n";
	}
	//cout << "postion => ";
	//for (int i = 0; i < n; i++) {
	//	cout << position[i] << " : ";
	//}
	//cout << "\n";
	int max = ans - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (position[i] == max) {
			dparr[max] = inputarr[i];
			max--;
		}
	}
	cout << ans<<"\n";
	for (int i = 0; i < ans; i++) {
		cout << dparr[i] << " ";
	}

}