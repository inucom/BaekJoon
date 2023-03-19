#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> A[500001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A[i] = { input,i };
	}
	sort(A,A+N);
	int cpr = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(A[i].second - i+1,ans);
	}
	cout << ans;
}