#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
string arr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	arr[0] = " ";
	unordered_map<string, int>pocket;
	int n, m;
	cin >> n >> m;
	string mon, index;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		pocket.insert({arr[i],i});
	}
	string fin;
	for (int i = 0; i < m; i++) {
		cin >> fin;
		if (pocket.find(fin) != pocket.end()) {
			cout << pocket.find(fin)->second << '\n';
		}
		else {
			cout << arr[stoi(fin)] << '\n';
		}
	}

}