#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		list<char>lst;
		auto iter = lst.end();
		for (int j = 0; j < input.length(); j++) {
			if (input[j] == '<' && iter != lst.begin()) {
				iter--;
			}
			else if (input[j] == '>' && iter != lst.end()) {
				iter++;
			}
			else if (input[j] == '-'&& iter != lst.begin()) {
				iter--;
				iter =lst.erase(iter);
			}
			else if (input[j] == '<' || input[j] == '>'||input[j] =='-')
				continue;
			else
				lst.insert(iter, input[j]);
		}
		for (iter = lst.begin(); iter != lst.end(); iter++) {
			cout << *iter;
		}
		cout << '\n';
		lst.clear();
	}

}