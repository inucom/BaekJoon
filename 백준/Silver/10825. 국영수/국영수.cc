#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct person {
	int kor, eng, math;
	string name;
};
person people[100000];

bool compare(person a, person b) {
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			else return a.math > b.math;
		}
		else return a.eng < b.eng;
	}
	else return a.kor > b.kor;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> people[i].name >> people[i].kor >> people[i].eng >> people[i].math;
	}
	sort(people, people + n, compare);
	for (int i = 0; i < n; i++) {
		cout << people[i].name<<'\n';
	}
}