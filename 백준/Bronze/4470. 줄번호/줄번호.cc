#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	cin.ignore();
	int index = 1;
	for (int i = 0; i < a; i++) {
		string str;
		getline(cin, str);
		
		cout << index++ << ". " << str << "\n";
	}
}