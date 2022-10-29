#include <iostream>
#include <string>
using namespace std;
int main() {
	string arr;
	while (true) {
		getline(cin, arr);
		if (arr == "END")
			break;
		int n = arr.length();
		for (int i = 0; i < n / 2; i++) {
			char tmp = arr[i];
			arr[i] = arr[n - i - 1];
			arr[n - i - 1] = tmp;
		}
		cout << arr<<'\n';
	}
}