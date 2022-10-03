#include<iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<string, int>card;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (card.find(str) == card.end()) {
			card.insert({ str, 0 });
		}
		else
			card[str]++;
	}
	int max = -1;
	string ans;
	auto iter = card.begin();
	for (iter = card.begin(); iter != card.end(); iter++) {
		if (iter->second > max) {
			max = iter->second;
			ans = iter->first;
		}
	}
	cout << ans;
}