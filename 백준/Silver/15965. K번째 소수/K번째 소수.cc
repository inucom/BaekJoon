#include <iostream>
using namespace std;
bool arr[7500000] = { 1,1,0,0, };
int main() {
	int k;
	cin >> k;
	for (int i = 2; i <=2740 ; i++) {
		if (arr[i]) {
			continue;
		}
		for (int j = 2 * i; j < 7500000; j += i) {
			arr[j] = 1;
		}
	}
	int index = 0, cnt = 0;
	while (cnt < k) {
		if (!arr[index]) {
			cnt++;
			//cout << index << '\n';
		}
		index++;
	}
	cout << index-1;
}