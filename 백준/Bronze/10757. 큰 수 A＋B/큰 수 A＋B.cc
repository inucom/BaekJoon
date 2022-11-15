#include <iostream>
#include <string>
using namespace std;
int arr1[10002] = {0,};
int arr2[10002] = { 0, };
int arr3[10002] ={0,};
int main() {
	string a, b;
	cin >> a >> b;
	int na = a.length();
	int ta = na;
	int nb = b.length();
	int tb = nb;
	for (int i = 10001; i > 10001-na; i--) {
		arr1[i] = a[ta-1]-48;
		ta--;
	}
	for (int i = 10001; i > 10001 - nb; i--) {
		arr2[i] = b[tb - 1] - 48;
		tb--;
	}
	int k = (na > nb) ? na : nb;
	for (int i = 10001; i > 10001 - k; i--) {
		arr3[i] += arr1[i] + arr2[i];
		if (arr3[i] >= 10) {
			arr3[i] %= 10;
			arr3[i - 1]++;
		}
	}
	if (arr3[10001 - k] == 0) {
		k--;
	}
	for (int i = 10001-k ; i <10002 ; i++) {
		cout << arr3[i];
	}
}