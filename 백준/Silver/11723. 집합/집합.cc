#include <iostream>
#include <string>
using namespace std;
bool arr[21] = {0,};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string order;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "add") {
			cin >> input;
			arr[input] = 1;
		}
		else if (order == "remove") {
			cin >> input;
			arr[input] = 0;
		}
		else if (order == "check") {
			cin >> input;
			if (arr[input] == 1) {
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		else if (order == "toggle") {
			cin >> input;
			if (arr[input] == 1) {
				arr[input] = 0;
			}
			else 
				arr[input] = 1;
		}
		else if (order == "all") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 1;
			}
		}
		else if (order == "empty") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 0;
			}
		}
	}
}