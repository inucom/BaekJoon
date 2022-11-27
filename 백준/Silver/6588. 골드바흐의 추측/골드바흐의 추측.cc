#include <iostream>
using namespace std;
int arr[1000001] = {1,1,1,0,};
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int input;
	for (int i = 2; i <= 1000000; i++) {
		if (arr[i] == 1)continue;
		for (int j = 2 * i; j <= 1000000; j += i) {
			arr[j] = 1;
		}
	}
	while (true)
	{
		bool check = false;
		cin >> input;
		if (input == 0) {
			break;
		}
		int start = 3, end = input - 3;
		while (start <= end) {
			if (!arr[start] && !arr[end]) {
				check = true;
				break;
			}
			else {
				start += 2;
				end -= 2;
			}
		}
		if (check) {
			cout << input << " = " << start << " + " << end << "\n";
		}
		else
			cout << "Goldbach's conjecture is wrong.\n";
	}
}