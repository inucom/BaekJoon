#include <iostream>
#include <string>
using namespace std;
string change(string str) {
	int n = str.length();
	for (int i = 0; i < n/2; i++) {
		char tmp = str[n - 1 - i];
		str[n - 1 - i] = str[i];
		str[i] = tmp;
	}
	//cout << str << "|||";
	return str;
}
int main() {
	string a, b, c;
	string input,ans, tmp = "";
	cin >> input;
	ans = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	int n = input.length();
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j <= n-i-1; j++) {
				a = change(input.substr(0, i));
				//cout << "\n";
				b = change(input.substr(i, j));
				//cout << "\n";
				c = change(input.substr(i+j, n));
				//cout << "\n";
				tmp = a + b + c;
				//cout << tmp << "\n";
				if (tmp < ans) {
					ans = tmp;
				}
			
		}
	}
	cout<<ans;
}
//반복문 수정
