#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int aa = a + d;
	int bb = c + b;
	if (aa > bb)
			cout << bb;
	else
			cout << aa;
	
}