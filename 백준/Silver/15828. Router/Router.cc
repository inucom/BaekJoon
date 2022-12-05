#include <iostream>
#include <deque>
using namespace std;
int main() {
	int n;
	deque<int> dque;
	cin >> n;
	int input;
	while (1) {
		cin >> input;
		if (input == -1) {
			break;
		}
		if (input >0 &&dque.size() < n) {
			dque.push_back(input);
		}
		else if (input == 0) {
			dque.pop_front();
		}
	}
	if (dque.empty()) {
		cout << "empty";
	}
	else
	{
		while (!dque.empty()) {
			cout << dque.front() << ' ';
			dque.pop_front();
		}
	}
	

}