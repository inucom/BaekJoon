#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int set[10] ={0,};
int main() {
	int rn,divn;
	cin >> rn;
	while (true) {
		divn = rn % 10;
		if (divn == 9) {
			divn = 6;
		}
		set[divn]++;
		rn /= 10;
		if (rn == 0) {
			break;
		}
	}
	set[6] = ceil((double)set[6] / 2);
	sort(set, set + 10);
	cout << set[9];
}