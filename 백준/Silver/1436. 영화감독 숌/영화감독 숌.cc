#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, cnt = 1;
	cin >> n;
	int ans = 666;
	int i = 1;
	string str;
	while (n != cnt) {
		ans = ans + 1;
		str = to_string(ans);
		//cout << str<<"  ";
		for (int j = 0; j < str.length()-2; j++) {
			if (str[j] == '6' && str[j + 1] == '6' && str[j + 2] == '6') {
				cnt++;
				break;
			}
			
		}
		//cout << cnt << " ";
	}
	cout << ans;
}

