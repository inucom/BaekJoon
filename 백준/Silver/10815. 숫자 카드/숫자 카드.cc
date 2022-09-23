#include <iostream>
#include <algorithm>
using namespace std;
int san[500001], card[500001];
int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> san[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> card[i];
	}
	sort(san, san + n);
	for (int i = 0; i < m; i++) {
		cout << binary_search(san, san + n, card[i]) << " ";
	}
	/*int left, right, mid;
	for (int i = 0; i < m; i++) {
		left = 0;
		right = n - 1;
		for (int j = 0; j < n; j ++) {
			mid = (left + right) / 2;
			if (card[i] == san[mid]) {
				card[i] = 1;
				break;
			}
			else if (card[i] > san[mid]) {
				left = mid-1;
			}
			else if (card[i] < san[mid]) {
				right = mid+1;
			}
		}
		if(card[i] != 1)
		card[i] = 0;
	}*/
	//for (int i = 0; i < m; i++) {
	//	cout << card[i] << " ";
	//}
}