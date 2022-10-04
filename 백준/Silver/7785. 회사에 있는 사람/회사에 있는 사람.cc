#include <iostream>
#include <map>
using namespace std;
int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	map<string, string,greater<string>>person;
	string name, state;
	for (int i = 0; i < n; i++) {
		cin >> name >> state;
		if (state =="enter") {
			person.insert({ name,state });

		}
		else if (person.find(name) != person.end()&&person[name] == "enter") {
			auto iter = person.find(name);
			person.erase(iter);

		}
	}
	for (auto iter = person.begin(); iter != person.end(); iter++) {
		cout << iter->first << '\n';
	}
}