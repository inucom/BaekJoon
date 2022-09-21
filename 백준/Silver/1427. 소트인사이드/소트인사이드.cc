#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int k[10];
int main() {
	string n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n.length(); i++) {
		k[i] = n[i] - '0';
		cnt++;
	}
	sort(k, k + cnt);
	for (int i = cnt-1; i >=0; i--) {
		cout<<k[i];
	}
}