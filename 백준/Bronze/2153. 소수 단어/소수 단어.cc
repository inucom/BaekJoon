#include <iostream>
#include <string>
using namespace std;
bool arr[1100] = { 1,0,0,0, };
int main() {
	string input;
	cin >> input;
	int n = input.length();
	int sum = 0;
	for(int i = 0; i< n ; i++){ 
		if (input[i] >= 'a' && input[i] <= 'z')
			sum += input[i] - 'a' + 1;
		else if (input[i] >= 'A' && input[i] <= 'Z')
			sum += input[i] - 'A' + 27;
	}
	for (int i = 2; i <= 40; i++) {
		if (arr[i])continue;
		for (int j = i * 2; j < 1100; j += i) {
			arr[j] = 1;
		}
	}
	if (!arr[sum]) {
		cout << "It is a prime word.";
	}
	else if(arr[sum])
		cout << "It is not a prime word.";
}