#include <iostream>
#include <algorithm>
using namespace std;
int arr[9][9];
int main() {
	int max = -1;
	int ai, aj;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				ai = i + 1;
				aj = j + 1;
			}
		}
	}
	cout << max << "\n" << ai << " " << aj;
}