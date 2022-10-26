#include <iostream>
#include <string>
using namespace std;
char input[5][16];
int main() {
	
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (input[j][i] == '\0')
				continue;
			cout<<input[j][i];
		}
	}
}