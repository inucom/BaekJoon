#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[51];

int main() {
	string str;
	cin >> str;
	int index = 0, num = 0, minus = 0, plus = 0, index_op = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '+' && str[i] != '-') {
			num = num * 10 + (str[i] -'0');
		}
		if(str[i] == '+' || str[i] == '-') {
			arr[index++] = num;
			num = 0;
			if (str[i] == '+') {
				arr[index++] = -1;
			}
			if (str[i] == '-') {
				arr[index++] = -2;
			}
		}
	}
	arr[index++] = num;

	int ans = arr[0];
	bool check_oper = false;
	for (int i = 1; i < index; i++) {
		if (arr[i] == -2) {
			check_oper = true;
			continue;
		}
		if (check_oper == true && arr[i] >=0) {
			ans -= arr[i];
		}
		else if (arr[i] >=0)
			ans += arr[i];
		//cout << ans << "\n";
		
	}
	cout << ans;
}