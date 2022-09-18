#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, v;
	cin >> a >> b >> v;
	//int i = 1,sum = 0;
	int ans;
	
	ans = (v-b) / (a - b);
	if (ans * (a - b) < (v - b)) {
		cout << ans + 1;
	}
	else cout << ans;
	/*while (true) {
		sum += a;
		if (sum >= v) {
			cout << i;
			break;
		}
		else
			sum += -b;
		i++;
	}*/
}