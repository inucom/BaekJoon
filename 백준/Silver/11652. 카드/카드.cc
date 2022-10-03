#include<iostream>
#include <map>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<long long, int>card;
	long long num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (card.find(num) == card.end()) {
			card.insert({ num, 0 });
		}
		else
			card[num]++;
	}
	int max = -1;
	long long ans =0;
	auto iter = card.begin();
	for (iter = card.begin(); iter != card.end(); iter++) {
		if (iter->second > max) {
			max = iter->second;
			ans = iter->first;
		}
	}
	cout << ans;
}