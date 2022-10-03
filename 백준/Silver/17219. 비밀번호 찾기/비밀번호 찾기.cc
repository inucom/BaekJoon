#include<iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, tr;
	cin >> n>>tr;
	map<string, string>card;
	string str, pass;
	for (int i = 0; i < n; i++) {
		cin >> str>>pass;
			card.insert({ str,pass });
	}
	string fsite;
	for (int i = 0; i < tr; i++) {
		cin >> fsite;
		auto it = card.find(fsite);
		cout << it->second << '\n';
	}
}