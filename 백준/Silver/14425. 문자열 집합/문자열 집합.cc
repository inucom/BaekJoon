#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[10001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n);
	int cnt = 0;
	string input;
	for (int i = 0; i < m; i++) {
		cin >> input; //입력하면서 검색???
		cnt += binary_search(s, s + n, input);
	}
	
	cout << cnt;
} //시간복잡도 폭발