#include <iostream>

using namespace std;
int arrN[1001];
int arrS[2001];
int main() {
	
	int n, m;
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + m; j++) {
			cin >> input;
			arrS[j] += input;
			arrN[i] -= input;
		}
	}
	for (int i = 0; i < n; i++) {
		arrS[i] = arrN[i]+ arrS[i];
	}
	for (int i = 0; i < n + m; i++) {
		cout << arrS[i] << ' ';
	}
	
}