#include <iostream>
#include <string>
using namespace std;
string etot(int n) {
	string out;
	switch (n)
	{
	case 0:
			out = "000";
			break;
	case 1:
		out = "001";
		break;
	case 2:
		out = "010";
		break;
	case 3:
		out = "011";
		break;
	case 4:
		out = "100";
		break;
	case 5:
		out = "101";
		break;
	case 6:
		out = "110";
		break;
	case 7:
		out = "111";
	}
	return out;
}

int main() {
	string input;
	cin >> input;
	string ans = "";
	for (int i = 0; i < input.length(); i++) {
		int a = input[i]-'0';
		ans.append(etot(a));
	}
	int i = 0;
	while (ans[i] != '1'&& i<ans.length()) {
		i++;
	}
	if (i == ans.length()) {
		ans = "0";
		i = 0;
	}
	cout << ans.substr(i,ans.length()-i);
}