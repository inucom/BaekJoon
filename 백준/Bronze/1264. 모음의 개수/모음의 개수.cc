#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	int ans;
	while (true) {
		ans = 0;
		getline(cin, a);
		if (a == "#")
			break;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == 'a') ans++;
			if (a[i] == 'e') ans++;
			if (a[i] == 'i') ans++;
			if (a[i] == 'o') ans++;
			if (a[i] == 'u') ans++;
			if (a[i] == 'A') ans++;
			if (a[i] == 'E') ans++;
			if (a[i] == 'I') ans++;
			if (a[i] == 'O') ans++;
			if (a[i] == 'U') ans++;
		}
		cout << ans << "\n";

	}
}

