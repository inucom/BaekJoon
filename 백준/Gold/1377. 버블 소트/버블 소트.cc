#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> A;
	vector<pair<int, int>> B;
	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back({ input,i });
		B.push_back({ input,i });
	}

	sort(A.begin(),A.end());
	int cpr = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		cpr = A[i].second - B[i].second;
		//cout <<B[i].first << "  B:" << B[i].second << "  A:" << A[i].second << "  cpr:" << cpr << "\n";
		if (ans < cpr)
			ans = cpr;
	}
	cout << ans + 1;
	//int ans = 0
	//for (int i = 0; i < N; i++) {
	//	
	//	if (ans < cpr);
	//	ans = cpr;
	//}
	//if (ans == 0) {
	//	cout << 1;
	//}
	//else {
	//	cout << cpr-1;
	//}
}