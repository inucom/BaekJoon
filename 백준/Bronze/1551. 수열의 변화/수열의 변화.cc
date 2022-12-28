#include <iostream>
#include <string>
using namespace std;
int arr[21];
int n, j;
void kk(int cnt, int jj) {
	if (jj == j) {
		return;
	}
	for (int i = 0; i < cnt-1; i++) {
		arr[i] = arr[i+1] - arr[i];
	}
	kk(cnt - 1, jj + 1);

}
int main() {
	
	cin >> n >> j;
	string input;
	cin >> input;
	int num = 0, index = 0, oper = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '-') {
			oper = 1;
		}
		else if (input[i] != ',') {
			num *= 10;
			num += input[i] -'0';
		}
		else {
			if (oper == 1) {

				arr[index++] = -num;
				num = oper = 0;
			}
			else {

				arr[index++] = num;
				num = oper = 0;
			}
		}
	}
	if (oper == 1) {

		arr[index++] = -num;
		num = oper = 0;
	}
	else {

		arr[index++] = num;
		num = oper = 0;
	}
	arr[index] = num;
	//for (int i = 0; i < n; i++) {
	//	cout << arr[i] << " ";

	//}
	//cout << "\n";
	kk(n, 0);
	
	for (int i = 0; i < n - j; i++) {
		cout << arr[i];
		if (i != n - j - 1) {
			cout << ",";
		}
	}

}
