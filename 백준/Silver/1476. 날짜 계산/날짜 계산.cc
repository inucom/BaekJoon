#include<iostream>
using namespace std;
int main() {
	int E, S, M;
	cin >> E >> S >> M;
	int year = 0;
	int e = 0, s = 0, m = 0;
	while (true) {
		year++;
		e = year % 15;
		s = year % 28;
		m = year % 19;
		if (e == 0) {
			e = 15;
		}
		if (s == 0) {
			s = 28;
		}
		if (m == 0) {
			m = 19;
		}
		//cout << e << "e" << s << "s" << m << "m\n";
		//cout << year << "\n";
		if (e == E && s == S && m == M) {
			cout << year;
			break;
		}
	}
}