#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a,b=0,c= 0;
	for (int i = 0; i < t; i++) {
		cin >> a;
		if (a == 1) {
			b++;
		}
		else
			c++;
	}
	if (b > c)
		cout << "Junhee is cute!";
	else {
		cout << "Junhee is not cute!";
	}
}
