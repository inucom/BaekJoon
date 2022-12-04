#include <iostream>
using namespace std;
int first[4] = { 2,3,5,7 };
int k;
bool check(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void find_ss(int n, int cnt) {
	int tmp = cnt;
	int tmpN = n;
	for (int j = 1; j <= 9; j += 2) {
		n = tmpN * 10 + j;
		cnt = tmp;
		cnt++;
		if (check(n) && cnt != k) {
			find_ss(n, cnt);
		}
		else if (check(n) && cnt == k) {
			cout << n << '\n';
		}
	}
}

int main(){
	cin >> k;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if (k == 1) {
			cout << first[i]<<'\n';
			continue;
		}
		sum = 0;
		int cnt = 1;
		sum += first[i];
		find_ss(sum, cnt);
	}
}