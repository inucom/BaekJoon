#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a.append(b);
	long long q, p;
	q = stoll(a);
	p = stoll(c.append(d));
	cout << q + p;
}