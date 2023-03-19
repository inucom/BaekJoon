#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<pair<int, int>> A;
	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back({ input,i });
	}
	sort(A.begin(),A.end());
	int cpr = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(A[i].second - i+1,ans);
	}
	cout << ans;
}