#include <iostream>
#include <string>
using namespace std;
int d(int a) {
	string s = to_string(a);
	int sum = a;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	return sum;
}
int main() {
	bool check[20000] ={0,};
	int i = 0;
	while (true) {
		i++;
		if (d(i) >= 15000)
			break;
		check[d(i)] = 1;
		
		}
	for (int i = 1; i < 10000; i++) {
		if (check[i] == 0)
			cout << i << "\n";
	}
}
