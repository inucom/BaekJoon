#include <iostream>
#include <string>
using namespace std;
int arr[1100001] = {1,1,0,0,};
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 2; i <= 1100000; i++) {
		if (arr[i] == 1)continue;
		for (int j = 2 * i; j <= 1100000; j += i) {
			arr[j] = 1;
		}
	}

	string str;
	
	for (int i = n; i <= 1100000; i++) {
		if (arr[i] == 0) {
			bool check = false;
			str = to_string(i);
			int k = str.length();
			if (k == 1) {
				cout << i << '\n';
				break;
			}
			for (int kk = 0; kk <= k / 2; kk++) {
				if (str[kk] != str[k - 1 - kk]) {
					check = true;
					break;
				}
			}
			if (check == false) {
				cout << i << '\n';
				break;
			}
		}
	}
}