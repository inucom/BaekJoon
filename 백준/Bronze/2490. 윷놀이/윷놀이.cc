#include <iostream>
char ans[3];
int arr[4];
using namespace std;
int main() {
	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cin >> arr[i];
			if (arr[i] == 1) {
				cnt++;
			}
		}
		switch (cnt) {
		case 0:
			ans[i] = 'D';
			break;
		case 1:
			ans[i] = 'C';
			break;
		case 2:
			ans[i] = 'B';
				break;
		case 3:
			ans[i] = 'A';
			break;
		case 4:
			ans[i] = 'E';
			break;
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << ans[i] << "\n";
	}
}