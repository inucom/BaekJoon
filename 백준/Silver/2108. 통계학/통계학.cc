#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;
int st[500000], freq[8001] = {0,};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	double sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> st[i];
		sum += st[i];
		freq[st[i]+4000]++;
		
	}

	sort(st, st + n);
	sum = floor(sum / n + 0.5); //1. 산술평균
	int mid = st[n / 2]; //2. 중앙값
	int range = st[n-1] -st[0]; //4. 범위
	if (n == 1)
		range = 0;
	int max = 0;
	int next;
	for (int i = 0; i < 8001; i++) {
		if (freq[i] > max) {
			max = freq[i];
			next = i;
		}
	}
	for (int i = next+1; i < 8001; i++) {
		if (freq[i] == max) {
			next = i;
			break;
		}
	}
	//cout << max << "ss";
	next = next - 4000;

	cout << sum << "\n" << mid << "\n" << next << "\n" << range;
}