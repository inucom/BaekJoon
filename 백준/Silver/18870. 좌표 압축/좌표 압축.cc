
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> crd, coo;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		coo.push_back(a);
		crd.push_back(a);
	}
	sort(crd.begin(), crd.end());
	crd.erase(unique(crd.begin(), crd.end()), crd.end());

	for (int i = 0; i < n; i++) {
		cout<<lower_bound(crd.begin(),crd.end(),coo[i]) - crd.begin() << " ";
	}
}